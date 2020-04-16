// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableGeneratorFuel.h"
#include "FGReplicationDetailInventoryComponent.h"
#include "FGPowerInfoComponent.h"
#include "FGFactoryHologram.h"

AFGBuildableGeneratorFuel::AFGBuildableGeneratorFuel() : Super() {
	this->mFuelInventoryHandler = CreateDefaultSubobject<UFGReplicationDetailInventoryComponent>(TEXT("FuelInventoryHandler"));
	this->mFuelResourceForm = EResourceForm::RF_SOLID;
	this->mPowerProductionExponent = 1.29999995231628;
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mCanChangePotential = true;
	this->mCurrentPotential = 1;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGFactoryHologram::StaticClass();
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
void AFGBuildableGeneratorFuel::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableGeneratorFuel::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void AFGBuildableGeneratorFuel::BeginPlay(){ }
void AFGBuildableGeneratorFuel::PostLoad(){ Super::PostLoad();}
void AFGBuildableGeneratorFuel::Factory_Tick(float dt){ }
void AFGBuildableGeneratorFuel::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
bool AFGBuildableGeneratorFuel::IsValidFuel(TSubclassOf<  UFGItemDescriptor > resource) const{ return bool(); }
bool AFGBuildableGeneratorFuel::IsValidSupplementalResource(TSubclassOf<  UFGItemDescriptor > resource) const{ return bool(); }
bool AFGBuildableGeneratorFuel::HasFuel() const{ return bool(); }
bool AFGBuildableGeneratorFuel::HasSuppleentalResource() const{ return bool(); }
float AFGBuildableGeneratorFuel::GetSupplementalConsumptionRateCurrent() const{ return float(); }
float AFGBuildableGeneratorFuel::GetSupplementalConsumptionRateMaximum() const{ return float(); }
float AFGBuildableGeneratorFuel::GetFuelAmount() const{ return float(); }
float AFGBuildableGeneratorFuel::GetSupplementalAmount() const{ return float(); }
void AFGBuildableGeneratorFuel::SetPendingPotential(float newPendingPotential){ }
void AFGBuildableGeneratorFuel::Factory_CollectFuel(float dt){ }
void AFGBuildableGeneratorFuel::Factory_CollectSupplimentalResource(float dt){ }
void AFGBuildableGeneratorFuel::LoadFuel(){ }
void AFGBuildableGeneratorFuel::LoadSupplemental(){ }
bool AFGBuildableGeneratorFuel::CanStartPowerProduction_Implementation() const{ return bool(); }
void AFGBuildableGeneratorFuel::Factory_StartPowerProduction_Implementation(){ }
void AFGBuildableGeneratorFuel::Factory_StopPowerProduction_Implementation(){ }
void AFGBuildableGeneratorFuel::Factory_TickPowerProduction_Implementation(float dt){ }
bool AFGBuildableGeneratorFuel::CanLoadFuel() const{ return bool(); }
bool AFGBuildableGeneratorFuel::CanLoadSupplenmental() const{ return bool(); }
void AFGBuildableGeneratorFuel::OnRep_ReplicationDetailActor(){ }
bool AFGBuildableGeneratorFuel::FilterFuelClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
void AFGBuildableGeneratorFuel::OnRep_FuelInventory(){ }
AFGReplicationDetailActor_GeneratorFuel* AFGBuildableGeneratorFuel::GetCastRepDetailsActor() const{ return nullptr; }
