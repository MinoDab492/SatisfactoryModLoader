// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableLightsControlPanel.h"

void AFGBuildableLightsControlPanel::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableLightsControlPanel, mLightControlData);
	DOREPLIFETIME(AFGBuildableLightsControlPanel, mIsEnabled);
}
void AFGBuildableLightsControlPanel::SetLightEnabled(bool isEnabled){ }
void AFGBuildableLightsControlPanel::SetLightControlData(FLightSourceControlData data){ }
bool AFGBuildableLightsControlPanel::IsLightEnabled() const{ return bool(); }
FLightSourceControlData AFGBuildableLightsControlPanel::GetLightControlData() const{ return FLightSourceControlData(); }
void AFGBuildableLightsControlPanel::OnRep_IsEnabled(){ }
