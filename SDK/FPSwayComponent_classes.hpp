#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x220 (0x4C8 - 0x2A8)
// BlueprintGeneratedClass FPSwayComponent.FPSwayComponent_C
class UFPSwayComponent_C : public USceneComponent
{
public:
	uint8                                        Pad_5ECB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Character_C*                       CharacterRef;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Responsiveness;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimingResponsiveness;                              // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxDipDelta;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DipDegrees;                                        // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentResponsiveness;                             // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           DipEnterCurve;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MinimumPitch;                                      // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaximumPitch;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CurrentRelativeOffset;                             // 0x300(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              LastControlRotation;                               // 0x318(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              ControlRotationDelta;                              // 0x330(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       DeltaUpdateRate;                                   // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTimeAccumulated;                              // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PitchLimitScalar;                                  // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OffsetRotation;                                    // 0x360(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlayingOffset;                                   // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ECC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OffsetTimeTotal;                                   // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OffsetTimeCurrent;                                 // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ECD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          Offset_Curve;                                      // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          OffsetCurveHandle;                                 // 0x390(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       PitchEaseThreshold;                                // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ControlPitch;                                      // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ControlYaw;                                        // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ECE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RelativeRotationDelta;                             // 0x3B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              LastRelativeDelta;                                 // 0x3C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       Recovery;                                          // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Seconds;                                     // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ECF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       EquippedItem;                                      // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Y__Pitch_;                                         // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ED0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Control_Rotation;                                  // 0x400(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FItemData_Animation                   ItemAnimationData;                                 // 0x418(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                AlternativeSwayParameterSwing;                     // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFPSwayComponent_C* GetDefaultObj();

	void SetResponsivenessFromItemAnimData(const struct FDataTableRowHandle& SelectedParameterHandle, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWeaponSwayData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_VariableSet_MinimumPitch_ImplicitCast, double K2Node_VariableSet_MaximumPitch_ImplicitCast, double K2Node_VariableSet_Responsiveness_ImplicitCast, double K2Node_VariableSet_AimingResponsiveness_ImplicitCast, double K2Node_VariableSet_Recovery_ImplicitCast);
	void CheckForAlternativeSwayUpdates(const class FString& CallFunc_SelectAlternativeSwayParameterString_OutString, bool CallFunc_NotEqual_StrStr_ReturnValue);
	void SelectAlternativeSwayParameterString(class FString* OutString, TScriptInterface<class IGlidingInterface> CallFunc_IsGliding_self_CastInput, bool CallFunc_IsGliding_ReturnValue);
	void SetItemAnimData(class AEquippableItem* EquippedItem, const class FString& CallFunc_SelectAlternativeSwayParameterString_OutString, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Animation& CallFunc_TryGetItemDataAnimation_OutData, enum class EGetResult CallFunc_TryGetItemDataAnimation_Branches, bool K2Node_SwitchEnum_CmpSuccess_1);
	void GetMinPitchOvershoot(double* MinPitchOvershoot, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	void GetMaxPitchOvershoot(double* MaxPitchOvershoot, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	double GetPitchEaseScalar(double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Ease_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Ease_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1);
	void GetRelativePitch(double* RelativePitch, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double K2Node_FunctionResult_RelativePitch_ImplicitCast);
	void Play_Custom_Offset_Curve(class UCurveVector* Offset_Curve);
	void Event_Update_Sway_Offset_Curve();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnEquippedItemChanged(class AEquippableItem* Item);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_FPSwayComponent(int32 EntryPoint, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Abs_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsAiming_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, double CallFunc_SelectFloat_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, class UCurveVector* K2Node_CustomEvent_Offset_Curve, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetVectorValue_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FRotator& CallFunc_MakeRotator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_WeightedMovingAverage_FRotator_ReturnValue, float CallFunc_GetTimeRange_MinTime, float CallFunc_GetTimeRange_MaxTime, float K2Node_Event_DeltaSeconds, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GetMaxPitchOvershoot_MaxPitchOvershoot, double CallFunc_GetMinPitchOvershoot_MinPitchOvershoot, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, double CallFunc_FClamp_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, TScriptInterface<class ILoadoutObservableInterface> CallFunc_BindDelegate_OnEquippedItemChanged_self_CastInput, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, class AEquippableItem* K2Node_CustomEvent_Item, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, TScriptInterface<class ILoadoutReadInterface> CallFunc_GetEquippedItem_self_CastInput, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class ILoadoutObservableInterface> CallFunc_UnbindDelegate_OnEquippedItemChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_OffsetTimeCurrent_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast_1, float CallFunc_Multiply_RotatorFloat_B_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast_2, float CallFunc_RLerp_Alpha_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast_4, double CallFunc_MapRangeClamped_Value_ImplicitCast, double K2Node_VariableSet_ControlPitch_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


