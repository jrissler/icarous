/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */
#include "TrajectoryPlanner_proxy.h"

void _wrap_FlightData_paramData_set(SwigObj * carg1, SwigObj * carg2);
SwigObj * _wrap_FlightData_paramData_get(SwigObj * carg1);
FlightData * _wrap_new_FlightData(/*aaa*/ char * carg1);
void _wrap_FlightData_AddMissionItem(SwigObj * carg1, SwigObj * carg2);
void _wrap_FlightData_AddResolutionItem(SwigObj * carg1, SwigObj * carg2);
void _wrap_FlightData_SetStartMissionFlag(SwigObj * carg1, SwigObj * carg2);
void _wrap_FlightData_ConstructMissionPlan(SwigObj * carg1);
void _wrap_FlightData_ConstructResolutionPlan(SwigObj * carg1);
void _wrap_FlightData_InputState(SwigObj * carg1, double carg2, double carg3, double carg4, double carg5, double carg6, double carg7, double carg8);
void _wrap_FlightData_AddTraffic(SwigObj * carg1, int carg2, double carg3, double carg4, double carg5, double carg6, double carg7, double carg8);
void _wrap_FlightData_GetTraffic_pFlightData_i_pd_pd_pd_pd_pd_pd(SwigObj * carg1, int carg2, double * carg3, double * carg4, double * carg5, double * carg6, double * carg7, double * carg8);
void _wrap_FlightData_ClearMissionList(SwigObj * carg1);
void _wrap_FlightData_ClearResolutionList(SwigObj * carg1);
void _wrap_FlightData_InputNextMissionWP(SwigObj * carg1, int carg2);
void _wrap_FlightData_InputNextResolutionWP(SwigObj * carg1, int carg2);
void _wrap_FlightData_InputTakeoffAlt(SwigObj * carg1, double carg2);
void _wrap_FlightData_InputCruisingAlt(SwigObj * carg1, double carg2);
void _wrap_FlightData_InputGeofenceData(SwigObj * carg1, SwigObj * carg2);
double _wrap_FlightData_GetTakeoffAlt(SwigObj * carg1);
double _wrap_FlightData_GetCruisingAlt(SwigObj * carg1);
double _wrap_FlightData_GetAltitude(SwigObj * carg1);
double _wrap_FlightData_GetAllowedXtracDeviation(SwigObj * carg1);
double _wrap_FlightData_GetResolutionSpeed(SwigObj * carg1);
int _wrap_FlightData_GetTotalMissionWP(SwigObj * carg1);
int _wrap_FlightData_GetTotalResolutionWP(SwigObj * carg1);
int _wrap_FlightData_GetTotalTraffic(SwigObj * carg1);
void _wrap_FlightData_Reset(SwigObj * carg1);
void _wrap_FlightData_InputAck(SwigObj * carg1, SwigObj * carg2);
bool _wrap_FlightData_CheckAck(SwigObj * carg1, SwigObj * carg2);
SwigObj * _wrap_FlightData_GetStartMissionFlag(SwigObj * carg1);
SwigObj * _wrap_FlightData_GetMissionPlanSize(SwigObj * carg1);
SwigObj * _wrap_FlightData_GetResolutionPlanSize(SwigObj * carg1);
SwigObj * _wrap_FlightData_GetNextMissionWP(SwigObj * carg1);
SwigObj * _wrap_FlightData_GetNextResolutionWP(SwigObj * carg1);
int _wrap_FlightData_GetTotalFences(SwigObj * carg1);
double _wrap_FlightData_getFlightPlanSpeed(SwigObj * carg1, SwigObj * carg2, int carg3);
void _wrap_FlightData_GetTraffic_pFlightData_i_rlarcfm_Position_rlarcfm_Velocity(SwigObj * carg1, int carg2, SwigObj * carg3, SwigObj * carg4);
/*aaaaaa*/SwigObj * _wrap_FlightData_GetGeofence(SwigObj * carg1, int carg2);
/*aaaaaa*/SwigObj * _wrap_FlightData_GetPolyPath(SwigObj * carg1);
void _wrap_delete_FlightData(FlightData * carg1);
PathPlanner * _wrap_new_PathPlanner(SwigObj * carg1);
int _wrap_PathPlanner_FindPath(SwigObj * carg1, int carg2, /*aaa*/ char * carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5, /*aaa*/ double * carg6);
int _wrap_PathPlanner_GetTotalWaypoints(SwigObj * carg1, /*aaa*/ char * carg2);
void _wrap_PathPlanner_GetWaypoint(SwigObj * carg1, /*aaa*/ char * carg2, int carg3, /*aaa*/ double * carg4);
void _wrap_PathPlanner_InputFlightPlan(SwigObj * carg1, /*aaa*/ char * carg2, int carg3, /*aaa*/ double * carg4, double carg5);
double _wrap_PathPlanner_Dist2Waypoint(SwigObj * carg1, /*aaa*/ double * carg2, /*aaa*/ double * carg3);
void _wrap_PathPlanner_OutputFlightPlan(SwigObj * carg1, SwigObj * carg2, char * carg3, char * carg4, char * carg5);
double _wrap_PathPlanner_ComputeXtrackDistance(SwigObj * carg1, SwigObj * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5);
double _wrap_PathPlanner_ComputeXtrackDistance_c(SwigObj * carg1, /*aaa*/ char * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5);
void _wrap_PathPlanner_GetPositionOnPlan(SwigObj * carg1, SwigObj * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5);
void _wrap_PathPlanner_GetPositionOnPlan_c(SwigObj * carg1, /*aaa*/ char * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5);
double _wrap_PathPlanner_GetInterceptHeadingToPlan(SwigObj * carg1, SwigObj * carg2, int carg3, /*aaa*/ double * carg4);
double _wrap_PathPlanner_GetInterceptHeadingToPlan_c(SwigObj * carg1, /*aaa*/ char * carg2, int carg3, /*aaa*/ double * carg4);
void _wrap_PathPlanner_ManueverToIntercept(SwigObj * carg1, SwigObj * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5);
void _wrap_PathPlanner_ManueverToIntercept_c(SwigObj * carg1, char * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5);
void _wrap_PathPlanner_GetExitPoint(SwigObj * carg1, char * carg2, /*aaa*/ double * carg3, int carg4, /*aaa*/ double * carg5);
double _wrap_PathPlanner_GetApproxElapsedPlanTime(SwigObj * carg1, SwigObj * carg2, /*aaa*/ double * carg3, int carg4);
void _wrap_PathPlanner_ClearAllPlans(SwigObj * carg1);
void _wrap_delete_PathPlanner(PathPlanner * carg1);

void FlightData_paramData_set(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_paramData_set(carg1, carg2);
}
SwigObj * FlightData_paramData_get(SwigObj * carg1) {
  return _wrap_FlightData_paramData_get(carg1);
}
FlightData * new_FlightData(/*aaa*/ char * carg1) {
  return _wrap_new_FlightData(carg1);
}
void FlightData_AddMissionItem(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_AddMissionItem(carg1, carg2);
}
void FlightData_AddResolutionItem(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_AddResolutionItem(carg1, carg2);
}
void FlightData_SetStartMissionFlag(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_SetStartMissionFlag(carg1, carg2);
}
void FlightData_ConstructMissionPlan(SwigObj * carg1) {
  return _wrap_FlightData_ConstructMissionPlan(carg1);
}
void FlightData_ConstructResolutionPlan(SwigObj * carg1) {
  return _wrap_FlightData_ConstructResolutionPlan(carg1);
}
void FlightData_InputState(SwigObj * carg1, double carg2, double carg3, double carg4, double carg5, double carg6, double carg7, double carg8) {
  return _wrap_FlightData_InputState(carg1, carg2, carg3, carg4, carg5, carg6, carg7, carg8);
}
void FlightData_AddTraffic(SwigObj * carg1, int carg2, double carg3, double carg4, double carg5, double carg6, double carg7, double carg8) {
  return _wrap_FlightData_AddTraffic(carg1, carg2, carg3, carg4, carg5, carg6, carg7, carg8);
}
void FlightData_GetTraffic_pFlightData_i_pd_pd_pd_pd_pd_pd(SwigObj * carg1, int carg2, double * carg3, double * carg4, double * carg5, double * carg6, double * carg7, double * carg8) {
  return _wrap_FlightData_GetTraffic_pFlightData_i_pd_pd_pd_pd_pd_pd(carg1, carg2, carg3, carg4, carg5, carg6, carg7, carg8);
}
void FlightData_ClearMissionList(SwigObj * carg1) {
  return _wrap_FlightData_ClearMissionList(carg1);
}
void FlightData_ClearResolutionList(SwigObj * carg1) {
  return _wrap_FlightData_ClearResolutionList(carg1);
}
void FlightData_InputNextMissionWP(SwigObj * carg1, int carg2) {
  return _wrap_FlightData_InputNextMissionWP(carg1, carg2);
}
void FlightData_InputNextResolutionWP(SwigObj * carg1, int carg2) {
  return _wrap_FlightData_InputNextResolutionWP(carg1, carg2);
}
void FlightData_InputTakeoffAlt(SwigObj * carg1, double carg2) {
  return _wrap_FlightData_InputTakeoffAlt(carg1, carg2);
}
void FlightData_InputCruisingAlt(SwigObj * carg1, double carg2) {
  return _wrap_FlightData_InputCruisingAlt(carg1, carg2);
}
void FlightData_InputGeofenceData(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_InputGeofenceData(carg1, carg2);
}
double FlightData_GetTakeoffAlt(SwigObj * carg1) {
  return _wrap_FlightData_GetTakeoffAlt(carg1);
}
double FlightData_GetCruisingAlt(SwigObj * carg1) {
  return _wrap_FlightData_GetCruisingAlt(carg1);
}
double FlightData_GetAltitude(SwigObj * carg1) {
  return _wrap_FlightData_GetAltitude(carg1);
}
double FlightData_GetAllowedXtracDeviation(SwigObj * carg1) {
  return _wrap_FlightData_GetAllowedXtracDeviation(carg1);
}
double FlightData_GetResolutionSpeed(SwigObj * carg1) {
  return _wrap_FlightData_GetResolutionSpeed(carg1);
}
int FlightData_GetTotalMissionWP(SwigObj * carg1) {
  return _wrap_FlightData_GetTotalMissionWP(carg1);
}
int FlightData_GetTotalResolutionWP(SwigObj * carg1) {
  return _wrap_FlightData_GetTotalResolutionWP(carg1);
}
int FlightData_GetTotalTraffic(SwigObj * carg1) {
  return _wrap_FlightData_GetTotalTraffic(carg1);
}
void FlightData_Reset(SwigObj * carg1) {
  return _wrap_FlightData_Reset(carg1);
}
void FlightData_InputAck(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_InputAck(carg1, carg2);
}
bool FlightData_CheckAck(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_CheckAck(carg1, carg2);
}
SwigObj * FlightData_GetStartMissionFlag(SwigObj * carg1) {
  return _wrap_FlightData_GetStartMissionFlag(carg1);
}
SwigObj * FlightData_GetMissionPlanSize(SwigObj * carg1) {
  return _wrap_FlightData_GetMissionPlanSize(carg1);
}
SwigObj * FlightData_GetResolutionPlanSize(SwigObj * carg1) {
  return _wrap_FlightData_GetResolutionPlanSize(carg1);
}
SwigObj * FlightData_GetNextMissionWP(SwigObj * carg1) {
  return _wrap_FlightData_GetNextMissionWP(carg1);
}
SwigObj * FlightData_GetNextResolutionWP(SwigObj * carg1) {
  return _wrap_FlightData_GetNextResolutionWP(carg1);
}
int FlightData_GetTotalFences(SwigObj * carg1) {
  return _wrap_FlightData_GetTotalFences(carg1);
}
double FlightData_getFlightPlanSpeed(SwigObj * carg1, SwigObj * carg2, int carg3) {
  return _wrap_FlightData_getFlightPlanSpeed(carg1, carg2, carg3);
}
void FlightData_GetTraffic_pFlightData_i_rlarcfm_Position_rlarcfm_Velocity(SwigObj * carg1, int carg2, SwigObj * carg3, SwigObj * carg4) {
  return _wrap_FlightData_GetTraffic_pFlightData_i_rlarcfm_Position_rlarcfm_Velocity(carg1, carg2, carg3, carg4);
}
/*aaaaaa*/SwigObj * FlightData_GetGeofence(SwigObj * carg1, int carg2) {
  return _wrap_FlightData_GetGeofence(carg1, carg2);
}
/*aaaaaa*/SwigObj * FlightData_GetPolyPath(SwigObj * carg1) {
  return _wrap_FlightData_GetPolyPath(carg1);
}
void delete_FlightData(FlightData * carg1) {
  return _wrap_delete_FlightData(carg1);
}
PathPlanner * new_PathPlanner(SwigObj * carg1) {
  return _wrap_new_PathPlanner(carg1);
}
int PathPlanner_FindPath(SwigObj * carg1, int carg2, /*aaa*/ char * carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5, /*aaa*/ double * carg6) {
  return _wrap_PathPlanner_FindPath(carg1, carg2, carg3, carg4, carg5, carg6);
}
int PathPlanner_GetTotalWaypoints(SwigObj * carg1, /*aaa*/ char * carg2) {
  return _wrap_PathPlanner_GetTotalWaypoints(carg1, carg2);
}
void PathPlanner_GetWaypoint(SwigObj * carg1, /*aaa*/ char * carg2, int carg3, /*aaa*/ double * carg4) {
  return _wrap_PathPlanner_GetWaypoint(carg1, carg2, carg3, carg4);
}
void PathPlanner_InputFlightPlan(SwigObj * carg1, /*aaa*/ char * carg2, int carg3, /*aaa*/ double * carg4, double carg5) {
  return _wrap_PathPlanner_InputFlightPlan(carg1, carg2, carg3, carg4, carg5);
}
double PathPlanner_Dist2Waypoint(SwigObj * carg1, /*aaa*/ double * carg2, /*aaa*/ double * carg3) {
  return _wrap_PathPlanner_Dist2Waypoint(carg1, carg2, carg3);
}
void PathPlanner_OutputFlightPlan(SwigObj * carg1, SwigObj * carg2, char * carg3, char * carg4, char * carg5) {
  return _wrap_PathPlanner_OutputFlightPlan(carg1, carg2, carg3, carg4, carg5);
}
double PathPlanner_ComputeXtrackDistance(SwigObj * carg1, SwigObj * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5) {
  return _wrap_PathPlanner_ComputeXtrackDistance(carg1, carg2, carg3, carg4, carg5);
}
double PathPlanner_ComputeXtrackDistance_c(SwigObj * carg1, /*aaa*/ char * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5) {
  return _wrap_PathPlanner_ComputeXtrackDistance_c(carg1, carg2, carg3, carg4, carg5);
}
void PathPlanner_GetPositionOnPlan(SwigObj * carg1, SwigObj * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5) {
  return _wrap_PathPlanner_GetPositionOnPlan(carg1, carg2, carg3, carg4, carg5);
}
void PathPlanner_GetPositionOnPlan_c(SwigObj * carg1, /*aaa*/ char * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5) {
  return _wrap_PathPlanner_GetPositionOnPlan_c(carg1, carg2, carg3, carg4, carg5);
}
double PathPlanner_GetInterceptHeadingToPlan(SwigObj * carg1, SwigObj * carg2, int carg3, /*aaa*/ double * carg4) {
  return _wrap_PathPlanner_GetInterceptHeadingToPlan(carg1, carg2, carg3, carg4);
}
double PathPlanner_GetInterceptHeadingToPlan_c(SwigObj * carg1, /*aaa*/ char * carg2, int carg3, /*aaa*/ double * carg4) {
  return _wrap_PathPlanner_GetInterceptHeadingToPlan_c(carg1, carg2, carg3, carg4);
}
void PathPlanner_ManueverToIntercept(SwigObj * carg1, SwigObj * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5) {
  return _wrap_PathPlanner_ManueverToIntercept(carg1, carg2, carg3, carg4, carg5);
}
void PathPlanner_ManueverToIntercept_c(SwigObj * carg1, char * carg2, int carg3, /*aaa*/ double * carg4, /*aaa*/ double * carg5) {
  return _wrap_PathPlanner_ManueverToIntercept_c(carg1, carg2, carg3, carg4, carg5);
}
void PathPlanner_GetExitPoint(SwigObj * carg1, char * carg2, /*aaa*/ double * carg3, int carg4, /*aaa*/ double * carg5) {
  return _wrap_PathPlanner_GetExitPoint(carg1, carg2, carg3, carg4, carg5);
}
double PathPlanner_GetApproxElapsedPlanTime(SwigObj * carg1, SwigObj * carg2, /*aaa*/ double * carg3, int carg4) {
  return _wrap_PathPlanner_GetApproxElapsedPlanTime(carg1, carg2, carg3, carg4);
}
void PathPlanner_ClearAllPlans(SwigObj * carg1) {
  return _wrap_PathPlanner_ClearAllPlans(carg1);
}
void delete_PathPlanner(PathPlanner * carg1) {
  return _wrap_delete_PathPlanner(carg1);
}
