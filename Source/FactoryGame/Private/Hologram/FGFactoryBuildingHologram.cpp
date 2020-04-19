// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFactoryBuildingHologram.h"
#include "FGBuildableFoundation.h"
#include "FGBuildableRailroadTrack.h"
#include "FGBuildableRoad.h"

AFGFactoryBuildingHologram::AFGFactoryBuildingHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->bHidden = true;
	this->bReplicates = true;
}
void AFGFactoryBuildingHologram::BeginPlay(){ }
void AFGFactoryBuildingHologram::CheckValidFloor(){ }
void AFGFactoryBuildingHologram::CheckClearance(){ }
bool AFGFactoryBuildingHologram::CheckClearanceForBuildingMesh(UStaticMeshComponent* mesh, const FComponentQueryParams& params){ return bool(); }
FVector AFGFactoryBuildingHologram::GetFloorEdgeDirection(const FVector& floorLoc, const FRotator& floorRot, const FVector& testLoc, FFoundationSideSelectionFlags excludeEdges) const{ return FVector(); }
FVector AFGFactoryBuildingHologram::GetFloorEdgeOffset(const FVector& floorLoc, const FRotator& floorRot, float floorSize, const FVector& testLoc, float testSize, FFoundationSideSelectionFlags excludeEdges) const{ return FVector(); }
FVector AFGFactoryBuildingHologram::GetWallEdgeDirection(const FVector& wallLoc, const FRotator& wallRot, const FVector& testLoc) const{ return FVector(); }
