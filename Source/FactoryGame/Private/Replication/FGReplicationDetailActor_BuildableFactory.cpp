// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGReplicationDetailActor_BuildableFactory.h"


AFGReplicationDetailActor_BuildableFactory::AFGReplicationDetailActor_BuildableFactory() : Super() {
	this->bHidden = true;
	this->bReplicates = true;
}
void AFGReplicationDetailActor_BuildableFactory::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGReplicationDetailActor_BuildableFactory::InitReplicationDetailActor( AFGBuildable* owningActor){ }
void AFGReplicationDetailActor_BuildableFactory::FlushReplicationActorStateToOwner(){ }
bool AFGReplicationDetailActor_BuildableFactory::HasCompletedInitialReplication() const{ return bool(); }
