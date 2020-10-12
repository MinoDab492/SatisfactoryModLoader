﻿#include "InitGameInstance.h"
#include "keybind/ModKeyBindRegistry.h"
#include "mod/ModSubsystems.h"
#include "tooltip/ItemTooltipHandler.h"

void UInitGameInstance::InitDefaultContent() {
    //Subsystems holders
    for (UClass* SubsystemHolderClass : ModSubsystems) {
        FSubsystemInfoHolder::RegisterSubsystemHolder(GetOwnerModReference(), SubsystemHolderClass);
    }
    //Key Bindings and Axis Bindings
    for (const FModKeyBindingInfo& KeyBindingInfo : ModKeyBindings) {
        UModKeyBindRegistry::RegisterModKeyBind(GetOwnerModReference(), KeyBindingInfo.KeyMapping, KeyBindingInfo.DisplayName);
    }
    for (const FModAxisBindingInfo& AxisBindingInfo : ModAxisBindings) {
        UModKeyBindRegistry::RegisterModAxisBind(GetOwnerModReference(), AxisBindingInfo.PositiveAxisMapping, AxisBindingInfo.NegativeAxisMapping, AxisBindingInfo.PositiveAxisDisplayName, AxisBindingInfo.NegativeAxisDisplayName);
    }
    for (UClass* GlobalTooltipProvider : GlobalItemTooltipProviders) {
        UItemTooltipHandler::RegisterGlobalTooltipProvider(GetOwnerModReference(), GlobalTooltipProvider->GetDefaultObject());
    }
}

void UInitGameInstance::DispatchInitialize() {
    InitDefaultContent();
    Init();
}
