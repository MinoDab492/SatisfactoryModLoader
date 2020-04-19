// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWorkBench.h"


UFGWorkBench::UFGWorkBench() : Super() {
	this->mManufacturingSpeed = 0.800000011920929;
	this->mFatigueMultiplier = 0.200000002980232;
	this->mFatigueDecreaseSpeedMultiplier = 3;
	this->mHoldProduceTime = 0.200000002980232;
	this->mFatigueUpdaterInterval = 10;
	this->mCooldownDelay = 1.5;
	this->mIsFatigueEnabled = true;
	this->PrimaryComponentTick.TickGroup = TG_DuringPhysics; this->PrimaryComponentTick.EndTickGroup = TG_PrePhysics; this->PrimaryComponentTick.bTickEvenWhenPaused = false; this->PrimaryComponentTick.bCanEverTick = true; this->PrimaryComponentTick.bStartWithTickEnabled = true; this->PrimaryComponentTick.bAllowTickOnDedicatedServer = true; this->PrimaryComponentTick.TickInterval = 0;
	this->bReplicates = true;
	this->bAutoActivate = true;
}
void UFGWorkBench::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void UFGWorkBench::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction){ }
void UFGWorkBench::TickProducing(float dt){ }
void UFGWorkBench::SetRecipe(TSubclassOf<  UFGRecipe > recipe){ }
bool UFGWorkBench::CanProduce(TSubclassOf< UFGRecipe > recipe, UFGInventoryComponent* inventory) const{ return bool(); }
bool UFGWorkBench::HasAuthority() const{ return bool(); }
bool UFGWorkBench::IsProducing(){ return bool(); }
void UFGWorkBench::Produce(float dt){ }
void UFGWorkBench::SetInventory( UFGInventoryComponent* newInventory){ }
UFGInventoryComponent* UFGWorkBench::GetPlayerInventory() const{ return nullptr; }
UFGInventoryComponent* UFGWorkBench::GetInventory() const{ return nullptr; }
void UFGWorkBench::SetWorkBenchUser( AFGCharacterPlayer*  newUser){ }
void UFGWorkBench::RemoveIngredientsAndAwardRewards(UFGInventoryComponent* inventory, TSubclassOf<  UFGRecipe > recipe){ }
void UFGWorkBench::UpdateFatigueMultiplier(bool useLeftOvers){ }
void UFGWorkBench::SetupManufacturingButton( UFGManufacturingButton* inButton){ }
float UFGWorkBench::GetRecipeFatigueMultiplier(){ return float(); }
