// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipeReservoir.h"
#include "FGPowerInfoComponent.h"
#include "FGPipeReservoirHologram.h"

void FQuantizedReservoirIndicatorData::SetFlowFillPct(float pct){ }
float FQuantizedReservoirIndicatorData::GetFlowFillPct() const{ return float(); }
void FQuantizedReservoirIndicatorData::SetFlowDrainPct(float pct){ }
float FQuantizedReservoirIndicatorData::GetFlowDrainPct() const{ return float(); }
void FQuantizedReservoirIndicatorData::SetContentPct(float pct){ }
float FQuantizedReservoirIndicatorData::GetContentPct() const{ return float(); }
AFGBuildablePipeReservoir::AFGBuildablePipeReservoir() : Super() {
	this->mStackingHeight = 400;
	this->mStorageCapacity = 500;
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mCurrentPotential = 1;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGPipeReservoirHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = true; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bReplicates = true;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildablePipeReservoir::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePipeReservoir::BeginPlay(){ }
void AFGBuildablePipeReservoir::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGBuildablePipeReservoir::Tick(float dt){ }
void AFGBuildablePipeReservoir::Factory_Tick(float dt){ }
FFluidBox* AFGBuildablePipeReservoir::GetFluidBox(){ return nullptr; }
TArray< class UFGPipeConnectionComponent* > AFGBuildablePipeReservoir::GetPipeConnections(){ return TArray<class UFGPipeConnectionComponent*>(); }
float AFGBuildablePipeReservoir::GetFluidContent() const{ return float(); }
float AFGBuildablePipeReservoir::GetFluidContentMax() const{ return float(); }
float AFGBuildablePipeReservoir::GetFlowFill() const{ return float(); }
float AFGBuildablePipeReservoir::GetFlowDrain() const{ return float(); }
float AFGBuildablePipeReservoir::GetFlowLimit() const{ return float(); }
TSubclassOf< UFGItemDescriptor > AFGBuildablePipeReservoir::GetFluidDescriptor() const{ return TSubclassOf<UFGItemDescriptor>(); }
