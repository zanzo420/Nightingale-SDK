#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x148 - 0xA0)
// BlueprintGeneratedClass BP_SquadTrackingComponent.BP_SquadTrackingComponent_C
class UBP_SquadTrackingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_CreatureSpawnerBase_C*             OwningSpawner;                                     // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        NodeIDCounter;                                     // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_835C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          NodeTimerHandle;                                   // 0xB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         GlobalDisableTracking;                             // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoStartTracking;                                 // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_835E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NodeLifetime;                                      // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NodeSpawnInterval;                                 // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxNodeSpawnDistance;                              // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinNodeSpawnDistance;                              // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TrailTerminated;                                   // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_835F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SquadTrackingNode_C*               PrecedingNode;                                     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNodeSpawned;                                     // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTrackingStopped;                                 // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTrackingStarted;                                 // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         DebugNodes;                                        // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugTrails;                                       // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LogFlagNodesExpired;                               // 0x12A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8360[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrecedingNodeLocation;                             // 0x130(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_SquadTrackingComponent_C* GetDefaultObj();

	void OnRep_PrecedingNode(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void PrintTrailStatistics(int32 CallFunc_GetMaxNumberOfNodes_MaxNodes, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FindTrailLength_TrailLength, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void GetMaxNumberOfNodes(int32* MaxNodes, double CallFunc_SafeDivide_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void GetTrailSimpleSplineData(bool* Success, TArray<struct FSplinePoint>* NavSplineData, TArray<struct FSplinePoint>& CallFunc_GetTrailSimpleSplineData_SplineData, bool CallFunc_IsValid_ReturnValue);
	void GetTrailNavSplineData(bool* Success, TArray<struct FSplinePoint>* NavSplineData, TArray<struct FSplinePoint>& CallFunc_GetTrailNavSplineData_NavSplineData, bool CallFunc_IsValid_ReturnValue);
	void GetNodeSpawnLocation(struct FVector* SpawnerLocation, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_GetTargetGroundLevel_HitDetected, const struct FVector& CallFunc_GetTargetGroundLevel_GroundLocation, const struct FVector& CallFunc_GetTargetGroundLevel_GroundNormal);
	void CheckNodeSpawnRequirements(bool* SpawnNode, double Distance3D, double Distance2D, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Vector_Distance2D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, double CallFunc_Vector_Distance_ReturnValue);
	void ValidateInitParameters(bool* Validated, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GenerateNavPathPoints(TArray<struct FSplinePoint>* NavPathSplineData, const TArray<struct FVector>& PathPointLocations, const TArray<struct FSplinePoint>& PathSplinePoints, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_GetNodeSpawnLocation_SpawnerLocation, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FSplinePoint& K2Node_MakeStruct_SplinePoint, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISquadMemberNativeInterface> CallFunc_GetLeaderActor_self_CastInput, class AActor* CallFunc_GetLeaderActor_ReturnValue, class UNavigationPath* CallFunc_FindPathToLocationSynchronously_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float K2Node_MakeStruct_InputKey_ImplicitCast);
	void GetNodeSpawnInterval(double* NodeSpawnInterval);
	void DrawDebugTrail(bool DrawCreatureTrail, const TArray<struct FSplinePoint>& SplineData, const struct FVector& PrevDrawLocation, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSplinePoint& CallFunc_Array_Get_Item, class ABP_CreatureBase_C* CallFunc_Array_Get_Item_1, class UBP_CreatureTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue, TArray<struct FSplinePoint>& CallFunc_GetLocationSplineData_LocationSplineData, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FSplinePoint>& CallFunc_GetTrailSimpleSplineData_SplineData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void IsTrackingActive(bool* TrackingActive, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void SpawnTrackingNode(const struct FS_TrackingData_Node& NodeData, class ABP_SquadTrackingNode_C** SpawnedNode, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetWorldIsTearingDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetNodeSpawnLocation_SpawnerLocation, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SquadTrackingNode_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void CollateSquadCreatureData(bool* Success, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, class UBP_CreatureTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CollateNodeData(struct FS_TrackingData_Node* TrackingNodeData, const struct FGuid& SpawnerID, const TArray<struct FSplinePoint>& NavSplineData, double SpawnerCreationTime, double NodeCreationTime, int32 CreatureCount, class UClass* SpawnerClass, const struct FS_TrackingData_Node& NodeData, const struct FGuid& CallFunc_GetSpawnerID_SpawnerID, TArray<struct FSplinePoint>& CallFunc_GenerateNavPathPoints_NavPathSplineData, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetGameTimeSinceCreation_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_GetTotalCreatures_CreatureCount, const struct FS_TrackingData_Node& K2Node_MakeStruct_S_TrackingData_Node, class UClass* CallFunc_GetObjectClass_ReturnValue, float K2Node_MakeStruct_NodeLife_33_DC1B70E24EFF977D572186A902CA8812_ImplicitCast, float K2Node_MakeStruct_SpawnerCreationTime_14_DD1A12DF4E39247BB25E79BC4C9CE4F2_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_MakeStruct_NodeCreationTime_11_E35FDC9B4BC1AB411E9B80A27CC014B6_ImplicitCast);
	void PrepTerminalNode(class ABP_CreatureSpawnerBase_C* Spawner, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void PrepIntermediaryNode(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void PrepNewInitialNode(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void PrepTrackingNode(bool IsInitialNode, bool IsTerminalNode, enum class E_TrackingNodeType NodeType, const struct FS_TrackingData_Node& CollatedNodeData, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckNodeSpawnRequirements_SpawnNode, const struct FVector& CallFunc_GetNodeSpawnLocation_SpawnerLocation, double CallFunc_Vector_Distance_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_SquadTrackingNode_C* CallFunc_SpawnTrackingNode_SpawnedNode, const struct FS_TrackingData_Node& CallFunc_CollateNodeData_TrackingNodeData, const struct FS_TrackingData_Node& K2Node_SetFieldsInStruct_StructOut);
	void TrackingLog(enum class ENWXLogLevel LogLevel, const class FString& LogMessage);
	void StopTracking(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void StartTracking(bool* Success, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsTrackingActive_TrackingActive, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void InitializeTracking(bool* Initialized, bool CallFunc_ValidateInitParameters_Validated, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetTotalCreatures_CreatureCount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_StartTracking_Success, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess);
	void DrawCreatureTrail();
	void LatentStartTracking(class ABP_CreatureBase_C* NewCreature);
	void DrawSquadTrail();
	void ReceiveBeginPlay();
	void PrintTrailStats();
	void ReceiveAuthorityGained();
	void ExecuteUbergraph_BP_SquadTrackingComponent(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class ABP_CreatureBase_C* K2Node_CustomEvent_NewCreature, bool CallFunc_StartTracking_Success, bool CallFunc_InitializeTracking_Initialized, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_InitializeTracking_Initialized_1, bool CallFunc_IsTrackingActive_TrackingActive, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void OnTrackingStarted__DelegateSignature();
	void OnTrackingStopped__DelegateSignature();
	void OnNodeSpawned__DelegateSignature();
};

}


