// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDroneStationInfo.h"

void FFGDroneTripStatistics::Clear(){ }
AFGDroneStationInfo::AFGDroneStationInfo() : Super() {
	this->mStation = nullptr;
	this->mStationLocation.X = 0.0;
	this->mStationLocation.Y = 0.0;
	this->mStationLocation.Z = 0.0;
	this->mStationClass = nullptr;
	this->mPairedStation = nullptr;
	this->mBuildingTag = TEXT("");
	this->mDroneStatus = EDroneStatus::EDS_NO_DRONE;
	this->mEstimatedRoundTripTime = 0.0;
	this->mEstimatedTransportRate = 0.0;
	this->mDroneTripStatistics.LatestRoundTripTime = 0.0;
	this->mDroneTripStatistics.LatestIncomingItemAmount = 0;
	this->mDroneTripStatistics.LatestOutgoingItemAmount = 0;
	this->mDroneTripStatistics.LatestIncomingItemStacks = 0.0;
	this->mDroneTripStatistics.LatestOutgoingItemStacks = 0.0;
	this->mDroneTripStatistics.LatestIncomingItemStackRate = 0.0;
	this->mDroneTripStatistics.LatestOutgoingItemStackRate = 0.0;
	this->mDroneTripStatistics.AverageRoundTripTime = 0.0;
	this->mDroneTripStatistics.AverageIncomingItemAmount = 0.0;
	this->mDroneTripStatistics.AverageOutgoingItemAmount = 0.0;
	this->mDroneTripStatistics.AverageIncomingItemStacks = 0.0;
	this->mDroneTripStatistics.AverageOutgoingItemStacks = 0.0;
	this->mDroneTripStatistics.AverageIncomingItemRate = 0.0;
	this->mDroneTripStatistics.AverageOutgoingItemRate = 0.0;
	this->mDroneTripStatistics.AverageIncomingItemStackRate = 0.0;
	this->mDroneTripStatistics.AverageOutgoingItemStackRate = 0.0;
	this->mDroneTripStatistics.MedianRoundTripTime = 0.0;
	this->mDroneTripStatistics.MedianIncomingItemAmount = 0.0;
	this->mDroneTripStatistics.MedianOutgoingItemAmount = 0.0;
	this->mDroneTripStatistics.MedianIncomingItemStacks = 0.0;
	this->mDroneTripStatistics.MedianOutgoingItemStacks = 0.0;
	this->bAlwaysRelevant = true;
	this->bReplicates = true;
}
void AFGDroneStationInfo::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGDroneStationInfo, mStationLocation);
	DOREPLIFETIME(AFGDroneStationInfo, mStationClass);
	DOREPLIFETIME(AFGDroneStationInfo, mPairedStation);
	DOREPLIFETIME(AFGDroneStationInfo, mConnectedStations);
	DOREPLIFETIME(AFGDroneStationInfo, mBuildingTag);
	DOREPLIFETIME(AFGDroneStationInfo, mDroneStatus);
	DOREPLIFETIME(AFGDroneStationInfo, mEstimatedRoundTripTime);
	DOREPLIFETIME(AFGDroneStationInfo, mEstimatedTransportRate);
	DOREPLIFETIME(AFGDroneStationInfo, mDroneTripStatistics);
}
void AFGDroneStationInfo::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGDroneStationInfo::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDroneStationInfo::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDroneStationInfo::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDroneStationInfo::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDroneStationInfo::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGDroneStationInfo::NeedTransform_Implementation(){ return bool(); }
bool AFGDroneStationInfo::ShouldSave_Implementation() const{ return bool(); }
void AFGDroneStationInfo::SetBuildingTag_Implementation(const FString& buildingTag){ }
void AFGDroneStationInfo::PairStation(AFGDroneStationInfo* otherStation){ }
void AFGDroneStationInfo::ClearLatestDroneTrips(){ }
float AFGDroneStationInfo::GetEstimatedBatteryRequirementRate() const{ return float(); }
int32 AFGDroneStationInfo::GetTripCostInBatteries() const{ return int32(); }
void AFGDroneStationInfo::SetDroneStatus(EDroneStatus droneStatus){ }
float AFGDroneStationInfo::CalculateStationTripPowerCost(AFGDroneStationInfo* ToStation) const{ return float(); }
void AFGDroneStationInfo::RegisterDroneTripInformation(const FDroneTripInformation& TripInfo){ }
float AFGDroneStationInfo::GetLatestEstimatedTotalIncomingItemStackRate() const{ return float(); }
float AFGDroneStationInfo::GetAverageTotalIncomingItemRate() const{ return float(); }
float AFGDroneStationInfo::GetAverageTotalIncomingItemStackRate() const{ return float(); }
float AFGDroneStationInfo::GetLatestEstimatedTotalOutgoingItemStackRate() const{ return float(); }
float AFGDroneStationInfo::GetAverageTotalOutgoingItemRate() const{ return float(); }
float AFGDroneStationInfo::GetAverageTotalOutgoingItemStackRate() const{ return float(); }
float AFGDroneStationInfo::GetEstimatedTotalTransportRate() const{ return float(); }
void AFGDroneStationInfo::OnPairedStationUpdate_Implementation(){ }
void AFGDroneStationInfo::OnPairedStationDestroyed(AActor* destroyedActor){ }
void AFGDroneStationInfo::OnRep_DroneStatus(){ }
void AFGDroneStationInfo::OnRep_EstimatedRoundTripTime(){ }
void AFGDroneStationInfo::OnRep_EstimatedTransportRate(){ }
void AFGDroneStationInfo::OnRep_DroneTripStatistics(){ }
void AFGDroneStationInfo::CalculateEstimatedRoundTripTime(){ }
void AFGDroneStationInfo::CalculateEstimatedTransportRate(){ }
void AFGDroneStationInfo::UpdateDroneTripStatistics(){ }
void AFGDroneStationInfo::AddConnectedStation(AFGDroneStationInfo* otherStation){ }
void AFGDroneStationInfo::RemoveConnectedStation(AFGDroneStationInfo* otherStation){ }
