// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGTargetPointLinkedList.h"


UFGTargetPointLinkedList::UFGTargetPointLinkedList() : Super() {
	this->mMaxLength = 2000;
}
void UFGTargetPointLinkedList::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGTargetPointLinkedList::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGTargetPointLinkedList::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGTargetPointLinkedList::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGTargetPointLinkedList::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGTargetPointLinkedList::NeedTransform_Implementation(){ return bool(); }
bool UFGTargetPointLinkedList::ShouldSave_Implementation() const{ return bool(); }
void UFGTargetPointLinkedList::InsertItem( AFGTargetPoint* newTarget){ }
void UFGTargetPointLinkedList::RemoveItem( AFGTargetPoint* targetToRemove){ }
void UFGTargetPointLinkedList::SetCurrentTarget( AFGTargetPoint* newTarget){ }
void UFGTargetPointLinkedList::SetPathVisibility(bool inVisible){ }
void UFGTargetPointLinkedList::SetNextTarget(){ }
void UFGTargetPointLinkedList::SetClosestPointAsTarget(){ }
void UFGTargetPointLinkedList::ClearRecording(){ }
