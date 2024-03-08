#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x178 - 0xA0)
// BlueprintGeneratedClass BP_WorldMapManager.BP_WorldMapManager_C
class UBP_WorldMapManager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerController_C*                Player_Controller;                                 // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Original_Waypoint_Marker_Size;                     // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Waypoint_Size;                                     // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Trace_Down_Height_;                                // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Tooltip_Staged_C*                 Tooltip_Widget;                                    // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Upper_Left_Corner_Location;                        // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Lower_Right_Corner_Location;                       // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, struct FS_LevelWaypointReference> Waypoint_Actors;                                   // 0x100(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Ftest_DisablePartySystem;                          // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMapUpdated;                                      // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnLocalPlayerUpdated;                              // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_WorldMapManager_C* GetDefaultObj();

	void GetPersistedWaypoints(bool CallFunc_AreAutomatedTestsRunning_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetLocalPlayerUIPersistenceComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void CreateMapBasedOnPrevious();
	void Get_Player_Controller(class ABP_PlayerController_C** Player_Controller, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Get_Corners_From_Target_Points(TArray<class ATargetPoint*>& Target_Points, class ATargetPoint* LowerRightCornerLOCAL, class ATargetPoint* UpperLeftCornerLOCAL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ATargetPoint* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Corners_From_NavMesh(double HalfMapBoundsYLOCAL, double HalfMapBoundsXLOCAL, const struct FVector& MapCenterLOCAL, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, TArray<class ANavMeshBoundsVolume*>& CallFunc_GetAllActorsOfClass_OutActors, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class ANavMeshBoundsVolume* CallFunc_Array_Get_Item, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Waypoint_Marker_Hovered(class FText Header, class FText Subheader, class FText Body, bool Hovered);
	void On_Spyglass_Clicked(const struct FTransform& Spawn_Transform, int32 Index_LOCAL, const struct FGuid& Waypoint_ID_LOCAL, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FGuid& CallFunc_NewGuid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FDataTableRowHandle& CallFunc_Pick_Next_Waypoint_Type_Waypoint_Type, const struct FS_WaypointInformation& K2Node_MakeStruct_S_WaypointInformation, bool CallFunc_DoesDataTableRowExist_ReturnValue);
	void On_Input_Modify_Size(bool Increasing, int32 Percent);
	void Set_Player_Controller(class ABP_PlayerController_C* Player_Controller);
	void Pick_Next_Waypoint_Type(struct FDataTableRowHandle* Waypoint_Type, TArray<struct FDataTableRowHandle>& CallFunc_Check_Waypoint_Types_Available_To_Add_Waypoint_Types_Available, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue);
	void Check_Waypoint_Types_Available_To_Add(TArray<struct FDataTableRowHandle>* Waypoint_Types_Available, bool Level_Found_LOCAL_, const class FString& Level_Name_LOCAL, const TArray<struct FDataTableRowHandle>& Waypoint_Types_Available_LOCAL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ABP_PlayerController_C* CallFunc_Get_Player_Controller_Player_Controller, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FS_WaypointInformation& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void Update_Waypoint_Marker_Sizes(const class FString& Level_Name_LOCAL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ABP_PlayerController_C* CallFunc_Get_Player_Controller_Player_Controller, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void Update_Waypoint_Marker_Positions(const class FString& Level_Name_LOCAL_, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ABP_PlayerController_C* CallFunc_Get_Player_Controller_Player_Controller, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void Remove_Waypoint_Marker_By_ID(const struct FGuid& ID, bool ID_Found_LOCAL, class UBP_MapTracker_C* Map_Tracker_LOCAL, int32 Index_LOCAL, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetLocalPlayerUIPersistenceComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ABP_PlayerController_C* CallFunc_Get_Player_Controller_Player_Controller, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, const struct FS_WaypointInformation& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void Add_Death_Marker(const struct FTransform& Spawn_Transform, const struct FGuid& Waypoint_ID_LOCAL, const struct FDataTableRowHandle& DeathMarker, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, class ABP_PlayerController_C* CallFunc_Get_Player_Controller_Player_Controller, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_WaypointInformation& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FS_WaypointInformation& K2Node_MakeStruct_S_WaypointInformation, const struct FGuid& CallFunc_NewGuid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Add_Waypoint_To_Active_Waypoints(const struct FS_WaypointInformation& Waypoint_, bool Level_Found_LOCAL, int32 Index_LOCAL, const class FString& Level_Name_LOCAL, int32 Temp_int_Array_Index_Variable, class ABP_PlayerController_C* CallFunc_Get_Player_Controller_Player_Controller, int32 Temp_int_Loop_Counter_Variable, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<struct FS_WaypointInformation>& K2Node_MakeArray_Array, const struct FS_LevelWaypoints& K2Node_MakeStruct_S_LevelWaypoints, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue);
	void ReceiveBeginPlay();
	void SERVER_Add_Waypoint_To_Active_Waypoints(const struct FS_WaypointInformation& Waypoint_);
	void SERVER_AUTH_Add_Waypoint_To_Active_Waypoints(const struct FS_WaypointInformation& Waypoint_);
	void SERVER_Remove_Waypoint_Marker_By_ID(const struct FGuid& ID);
	void SERVER_AUTH_Remove_Waypoint_Marker_By_ID(const struct FGuid& ID);
	void Remake_Waypoint_Actors();
	void OnGameStateReady(bool Success);
	void ExecuteUbergraph_BP_WorldMapManager(int32 EntryPoint, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, TArray<class ATargetPoint*>& CallFunc_GetAllActorsOfClass_OutActors, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_UI_MapTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_BreakUIMapTable_Map_Level_Name, class FText CallFunc_BreakUIMapTable_Level_Description, TSoftObjectPtr<class UTexture2D> CallFunc_BreakUIMapTable_Map_Texture, enum class E_MapRotation CallFunc_BreakUIMapTable_Map_Rotation_Override, double CallFunc_BreakUIMapTable_Maximum_Realm_Height, const struct FS_WaypointInformation& K2Node_CustomEvent_Waypoint__1, const struct FS_WaypointInformation& K2Node_CustomEvent_Waypoint_, int32 Temp_int_Loop_Counter_Variable, const struct FGuid& K2Node_CustomEvent_ID_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGuid& K2Node_CustomEvent_ID, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_PlayerController_C* CallFunc_Get_Player_Controller_Player_Controller, class ABP_PlayerController_C* CallFunc_Get_Player_Controller_Player_Controller_1, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, bool CallFunc_HasAuthority_ReturnValue_1, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_WaypointInformation& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class ABP_WaypointMarker_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FS_LevelWaypointReference& K2Node_MakeStruct_S_LevelWaypointReference, class ABP_PlayerController_C* CallFunc_Get_Player_Controller_Player_Controller_2, bool K2Node_CustomEvent_Success, bool CallFunc_HasAuthority_ReturnValue_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle);
	void OnLocalPlayerUpdated__DelegateSignature();
	void OnMapUpdated__DelegateSignature();
};

}


