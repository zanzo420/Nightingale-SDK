#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x130 - 0xA0)
// BlueprintGeneratedClass BP_TargetingComponent.BP_TargetingComponent_C
class UBP_TargetingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerController_C*                OwningController;                                  // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_TargetingInfo>              PossibleTargets;                                   // 0xB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_TargetingInfo                      ChosenTarget;                                      // 0xC0(0x54)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7155[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ViewportWidth;                                     // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ViewportHeight;                                    // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_RangedWeaponAimAssist_C*           AimAssistComponent;                                // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       AssistScalingThreshold;                            // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_TargetingComponent_C* GetDefaultObj();

	void RestrictMinimumBoxSize(const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* OutMin, struct FVector2D* OutMax, const struct FVector2D& SmallestBoxMax, const struct FVector2D& SmallestBoxMin, const struct FVector2D& Center, const struct FVector2D& NewMax, const struct FVector2D& NewMin, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_FMax_ReturnValue, double CallFunc_FMax_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_FMin_ReturnValue, double CallFunc_FMin_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue);
	void GetRequiredData(int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void GetBoxToScreenRatio(const struct FS_TargetingInfo& TargetingInfo, double* Ratio, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Abs_ReturnValue, double CallFunc_Abs_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FMin_ReturnValue);
	void GetDistanceToActor(class AActor* OtherActor, double* Distance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue);
	void GetAxisWeights(double* XWeight, double* YWeight, double ScalingBias, const struct FVector2D& DirectionBias, double GlobalBias, double YCenterBias, double XCenterBias, const struct FVector2D& ScreenCenter, const struct FVector2D& BBoxCenter, bool CallFunc_IsValid_ReturnValue, class UBP_RangedWeaponAimAssist_C* CallFunc_GetAimAssistComponent_AimAssistComponent, bool CallFunc_GetAimAssistComponent_Success, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_GetBoxToScreenRatio_Ratio, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Abs_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_SignOfFloat_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_SignOfFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_YCenterBias_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1, double K2Node_VariableSet_XCenterBias_ImplicitCast);
	void IsInsideBox(const struct FVector2D& Location, const struct FVector2D& BMin, const struct FVector2D& BMax, bool* Success, double LocalCenterY, double LocalCenterX, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void ScoreAllTargets(const struct FVector2D& ScreenCenter, double MappedY, double MappedX, const struct FVector2D& TargetCenter, double LocalScore, const struct FS_TargetingInfo& CurrentTargetData, int32 Index, bool CallFunc_IsInsideBox_Success, bool CallFunc_IsInsideBox_Success_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, double CallFunc_Abs_ReturnValue, double CallFunc_Abs_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_3, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_FMax_ReturnValue, double CallFunc_FMax_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, double CallFunc_GetDistanceToActor_Distance, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_FMax_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FS_TargetingInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_SetFieldsInStruct_ScoreY_29_72B2D8014297876F71FD7994C144C9EB_ImplicitCast, float K2Node_SetFieldsInStruct_ScoreX_27_54D4D9D74FF04BE1A82B43821F1F707B_ImplicitCast, float K2Node_SetFieldsInStruct_Score_18_3DD3B6514E62D2B0873325972EC96ECF_ImplicitCast, float K2Node_SetFieldsInStruct_Score_18_3DD3B6514E62D2B0873325972EC96ECF_ImplicitCast_1);
	void SetViewportSize(int32 SizeX, int32 SizeY);
	void ChooseTarget(double PreviousTargetBias, int32 Index, double CurrentScore, double HighestScore, int32 WiningIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FS_TargetingInfo& CallFunc_Array_Get_Item, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, const struct FS_TargetingInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, double K2Node_VariableSet_CurrentScore_ImplicitCast);
	void GetAimAssistComponent(class UBP_RangedWeaponAimAssist_C** AimAssistComponent, bool* Success, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ILoadoutReadInterface> CallFunc_GetEquippedItem_self_CastInput, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UBP_RangedWeaponAimAssist_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void GetScreenSpaceBoundingBox(class ABP_StarterProjectCharacter_C* Target, bool* Success, struct FS_TargetingInfo* TargetingInfo, const struct FVector2D& CenterPos, double OuterRatio, const struct FVector2D& Max, const struct FVector2D& Min, const TArray<struct FVector>& Multipliers, const struct FVector2D& ScreenPos, const struct FVector& WorldExtent, const struct FVector& WorldOrigin, bool NewLocalVar_0, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FVector>& K2Node_MakeArray_Array, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_2, const struct FVector2D& CallFunc_RestrictMinimumBoxSize_OutMin, const struct FVector2D& CallFunc_RestrictMinimumBoxSize_OutMax, const struct FS_TargetingInfo& K2Node_MakeStruct_S_TargetingInfo, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_FMax_ReturnValue, double CallFunc_FMax_ReturnValue_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_FMin_ReturnValue, double CallFunc_FMin_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToScreen_ScreenLocation, bool CallFunc_ProjectWorldLocationToScreen_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToScreen_ScreenLocation_1, bool CallFunc_ProjectWorldLocationToScreen_ReturnValue_1);
	void FindPossibleTargets(const TArray<struct FS_TargetingInfo>& LocalTargets, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_RangedWeaponAimAssist_C* CallFunc_GetAimAssistComponent_AimAssistComponent, bool CallFunc_GetAimAssistComponent_Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<class ABP_StarterProjectCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_StarterProjectCharacter_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetScreenSpaceBoundingBox_Success, const struct FS_TargetingInfo& CallFunc_GetScreenSpaceBoundingBox_TargetingInfo, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_GetDistanceToActor_Distance, bool CallFunc_WasRecentlyRendered_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_TargetingComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue);
};

}


