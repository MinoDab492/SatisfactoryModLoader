// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDecorationDescriptor.h"


UFGDecorationDescriptor::UFGDecorationDescriptor() : Super() {
	this->mGroundMeshScale.X = 1; this->mGroundMeshScale.Y = 1; this->mGroundMeshScale.Z = 1;
	this->mUseDisplayNameAndDescription = true;
	this->mStackSize = EStackSize::SS_MEDIUM;
	this->mCanBeDiscarded = true;
	this->mForm = EResourceForm::RF_SOLID;
}
UStaticMesh* UFGDecorationDescriptor::GetGroundMesh(TSubclassOf< UFGItemDescriptor > inClass){ return nullptr; }
UStaticMesh* UFGDecorationDescriptor::GetMesh1p(TSubclassOf< UFGItemDescriptor > inClass){ return nullptr; }
UStaticMesh* UFGDecorationDescriptor::GetMesh3p(TSubclassOf< UFGItemDescriptor > inClass){ return nullptr; }
TSubclassOf< AActor > UFGDecorationDescriptor::GetDecorationActorClass(TSubclassOf< UFGItemDescriptor > inClass){ return TSubclassOf<AActor>(); }
FVector UFGDecorationDescriptor::GetGroundMeshScale(TSubclassOf< UFGItemDescriptor > inClass){ return FVector(); }
