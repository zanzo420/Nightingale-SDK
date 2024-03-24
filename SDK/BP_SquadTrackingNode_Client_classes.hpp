#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x3D0 - 0x2A0)
// BlueprintGeneratedClass BP_SquadTrackingNode_Client.BP_SquadTrackingNode_Client_C
class ABP_SquadTrackingNode_Client_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                      Spline;                                            // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FS_TrackingData_ClientNode            ClientNodeData;                                    // 0x2C0(0x30)(Edit, BlueprintVisible, Net, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       SplineSnapThreshold;                               // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawDebug;                                         // 0x2F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_TrackingNodeType                NodeType;                                          // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96A8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSplinePoint>                  NavSplineData;                                     // 0x300(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                         Visible;                                           // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TrackingNodeVisited             NodeVisited;                                       // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96A9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            Character;                                         // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            TerminalNodeChanged;                               // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UTexture2D>             CreatureIcon;                                      // 0x330(0x28)(Edit, BlueprintVisible, Net, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  CreatureName;                                      // 0x358(0x18)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	bool                                         TrailActivator;                                    // 0x370(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SquadTrackingNode_Client_C*        Proceeding_Node;                                   // 0x378(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_SquadTrackingNode_Client_C*        TrackingNode;                                      // 0x380(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        SpoorTypesForTracking;                             // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsTerminalNode;                                    // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SpoorType;                                         // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                TrackEndNotify;                                    // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class ABP_CreatureBase_C*>            TrackedSquad;                                      // 0x3C0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_SquadTrackingNode_Client_C* GetDefaultObj();

	void SetTrackedSquad(const TArray<class ABP_CreatureBase_C*>& LSquad, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetTerminalNode(bool CallFunc_IsValid_ReturnValue);
	void TerminalNodeFound(double HighlightTimer, const struct FGameplayTag& HighlightAnimalsTag);
	void SplineVisibilityActivation(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FGameplayTag& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USplineMeshComponent* K2Node_DynamicCast_AsSpline_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, int32 CallFunc_Array_Length_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class USplineMeshComponent* K2Node_DynamicCast_AsSpline_Mesh_Component_1, bool K2Node_DynamicCast_bSuccess_1);
	void SplineVisiblityCheck(bool NewLocalVar_0, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetHorizontalDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void NodeEnumCheck(bool K2Node_SwitchEnum_CmpSuccess);
	void ExpireProxyNode(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1);
	void TrackingNodeClientProxyLog(const class FString& LogMessage, enum class ENWXLogLevel LogLevel, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void AddSplineMeshComponentForIndex(int32 Index, class USplineMeshComponent** Component, const struct FTransform& Temp_struct_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FTransform& Temp_struct_Variable_1, const struct FTransform& Temp_struct_Variable_2, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue_1, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue_2, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void DrawDebugPoints(const struct FVector& PrevDrawLocation, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, class UMaterialInterface* Temp_object_Variable, bool CallFunc_IsServer_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class UMaterialInterface* Temp_object_Variable_1, const struct FSplinePoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInterface* Temp_object_Variable_2, bool CallFunc_Vector_IsNearlyZero_ReturnValue, enum class E_TrackingNodeType Temp_byte_Variable, class UMaterialInterface* K2Node_Select_Default);
	void InitializeSpline(const struct FVector& PointOffset, const TArray<struct FVector>& Datapoints, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue, float CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue_1, class USplineMeshComponent* CallFunc_AddSplineMeshComponentForIndex_Component, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 Temp_int_Variable_1, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, int32 CallFunc_Subtract_IntInt_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FSplinePoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
	void Set_Tracking_Node_Visible(bool Visible, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, float CallFunc_GetHorizontalDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void UserConstructionScript(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void SpyglassStateChanged(bool SpyglassUp);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void CrossServerDestoryProxyNode();
	void ReceiveDestroyed();
	void SplineVisibilityTimer();
	void ExecuteUbergraph_BP_SquadTrackingNode_Client(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_GetSpyglassState_SpyglassUp, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool K2Node_CustomEvent_SpyglassUp, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void TerminalNodeChanged__DelegateSignature();
};

}


