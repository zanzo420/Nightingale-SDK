#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x281 (0x739 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_CC_CharacterCreation.WBP_CC_CharacterCreation_C
class UWBP_CC_CharacterCreation_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ccShelf;                                      // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_SelectSubList;                                // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_fadeToBlack;                                  // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ShowCC;                                       // 0x4D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x4E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DB_SW_VisualModes_C*              Debugging_VisualModes;                             // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DynamicPanelBorder;                                // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ShelfBG;                                       // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_sw_MainNavList_C*              WBP_CC_sw_MainNavList;                             // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWbp_cc_sw_NavButtons_C*               Wbp_cc_sw_NavButtons;                              // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_sw_SubNavList_C*               WBP_CC_sw_SubNavList;                              // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CC_NewProfileCancelled;                            // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CC_PlayerAppearanceUpdate;                         // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       LastUsedZoom;                                      // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Field_Of_View_Menu;                                // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Menu_Camera_Rotation;                              // 0x548(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               CameraPanOffset;                                   // 0x560(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraPanOriginal;                                 // 0x578(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Default_ArmLength;                                 // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   UICameraBoom;                                      // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraBoomOffset;                                  // 0x5A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CC_AppearanceSelected;                             // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CC_ReturnToAppearanceOptions;                      // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CC_ZoomReturnCamera;                               // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         LMB_DN;                                            // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MMB_DN;                                            // 0x5E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7047[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MouseRMB_LastPosition;                             // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Scene_AdjustLighting;                              // 0x600(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AStaticMeshActor*>              SceneProps;                                        // 0x610(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	bool                                         Character_Standing;                                // 0x620(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7048[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACameraActor*                          Camera_Scene;                                      // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ActiveStageIndex;                                  // 0x630(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Stagemax_Index;                                    // 0x634(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProxyCharacter_Child_CharacterCreation_C* BP_Character_Proxy;                                // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       CameraArm_Min;                                     // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CameraArm_Max;                                     // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           FloatCurve;                                        // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Zoom_Level;                                        // 0x658(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AUtoRotate_On;                                     // 0x65C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_704A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_CC_DynamicSubPanel__Base_C*       PanelWidget;                                       // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Zoom_Level_LastUsed;                               // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_704C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CC_CameraModeChange;                               // 0x670(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         StageConfirm;                                      // 0x680(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_704D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_CC_DynamicSubPanel__Base_C*> Randomize_TempWidgets;                             // 0x688(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGuid                                 TelemetrySessionID;                                // 0x698(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        TimeStarted;                                       // 0x6A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                AccountId;                                         // 0x6B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_CC_SubPanel                        ActiveSubpanelData;                                // 0x6C0(0x4A)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_704F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_UI_CC_AppearanceInputTypes      Input_Behaviour;                                   // 0x710(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7050[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_CC_sw_CharacterNameConfirm_C*     CharNameConfirmation;                              // 0x718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            JoinGameAsNewProfile;                              // 0x720(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          AudioStartTimer;                                   // 0x730(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_EnableFocusHighlightingDebugging;             // 0x738(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_CharacterCreation_C* GetDefaultObj();

	void TempDebugHighlightingForFocus(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool CallFunc_HasFocusedDescendants_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	class UWidget* CustomNav_DynamicBorder_ReturnToSubList(enum class EUINavigation Navigation);
	class UWidget* NavigateToDynamicPanel(enum class EUINavigation Navigation, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UNWXCommonActivatableWidget* K2Node_DynamicCast_AsNWXCommon_Activatable_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue_1, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue);
	class UWidget* NavigateToMainList(enum class EUINavigation Navigation, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue);
	class UWidget* NavigateToSubList(enum class EUINavigation Navigation, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue);
	void Reset_Character_Creation_Camera(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetNormalizedCameraZoom_ReturnValue);
	void ResetToCharacterCamera(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnJoinGameAsNewPofile(const struct FCreateProfile& Profile);
	void NameConfirmed(bool Condition, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue);
	void SendTelemetryEnd(bool bCancelled, bool CallFunc_IsValid_Guid_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue);
	void SetupTelemetryAndSendStart(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue, const struct FGuid& CallFunc_NewGuid_ReturnValue, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue);
	void DelayStartAudio(const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue);
	void EnableScrollAudio(bool AudioEnabled);
	void RandomizePanels(TArray<struct FS_CC_SubPanel>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, const struct FS_CC_SubPanel& CallFunc_Array_Get_Item, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UWBP_CC_DynamicSubPanel__Base_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void RefreshCamButtonVis(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ConfirmCancelled_ReturnToCustomization(const struct FS_CC_MainCategory& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FS_CC_SubCategory& CallFunc_Array_Get_Item, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1);
	void SetCharacterPose(enum class E_CC_CharacterPose InputPin, class UBP_CharacterAppearanceComponent_C* L_AppearComponenet, enum class E_CC_CharacterPose Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, enum class E_CC_CharacterPose Temp_byte_Variable_1, bool K2Node_Select_Default, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool K2Node_Select_Default_1);
	void SetPoseData(enum class E_CC_CharacterPose Selection);
	void StartCC_SetStage0(bool L_Advance);
	void RefreshStageStep(int32 ActiveStageIndex, bool AdvanceToConfirm, bool L_Advance, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetZoomLevel_FromStageIndex(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 K2Node_Select_Default);
	void HandleCameraRotateTick(bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_BooleanOR_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FEventReply& CallFunc_OnMouseMove_RMB_CameraMove_Rotate_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void ReturnToCC_Cam(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController);
	void Refresh_SubPanel(const struct FS_CC_MainCategory& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_CC_SubCategory& CallFunc_Array_Get_Item);
	void CancelCC(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class AStaticMeshActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void Stage_StepBackwards(bool CallFunc_Less_IntInt_ReturnValue);
	void Stage_StepForward(bool CallFunc_LessEqual_IntInt_ReturnValue);
	void PanelClosed(bool CallFunc_IsValid_ReturnValue);
	void ToggleZoom(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetZoomLevel(int32 ZoomLevel, const struct FPointerEvent& L_MouseEvent, class UCameraComponent* L_UICamera, class USpringArmComponent* L_SpringArm, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, float Temp_real_Variable_4, float Temp_real_Variable_5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetNormalizedCameraZoom_ReturnValue, int32 Temp_int_Variable, float K2Node_Select_Default);
	void ResetRotation(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void FadeUp(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void GetRandomAppearanceArchetype(bool IdealHeadsOnly, struct FDataTableRowHandle* AppearanceRowHandle, const TArray<struct FDataTableRowHandle>& Rows, int32 Temp_int_Array_Index_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, const struct FDataTableRowHandle& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_Select_Default, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void RandomizeAppearance(bool IdealHeadsOnly, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetRandomAppearanceArchetype_AppearanceRowHandle, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void AdjustPedestalHeightBasedOnArmDistance(class USpringArmComponent* Spring_Arm, class USceneComponent* Camera, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast);
	void UpdateBackCancelText();
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FPointerEvent& L_MouseEvent, class UCameraComponent* L_UICamera, class USpringArmComponent* L_SpringArm, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_HasMouseCapture_ReturnValue, bool CallFunc_HasMouseCapture_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsHovered_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetNormalizedCameraZoom_ReturnValue, bool CallFunc_HasMouseCapture_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, double CallFunc_MapRangeClamped_ReturnValue, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanNOR_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FEventReply& CallFunc_Handled_ReturnValue_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetZoomLevel_Target_Arm_Length_ImplicitCast);
	void Start_Character_Creation(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FS_CC_MainCategory& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_CC_SubCategory& CallFunc_Array_Get_Item);
	void Set_CCPose__Visibility(bool Stand_Up_, bool Visible_, bool IsNewProfile, bool CallFunc_IsValid_ReturnValue);
	void SetCharacterCreationCamera(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AActor* CallFunc_GetViewTarget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float K2Node_VariableSet_TargetArmLength_ImplicitCast);
	void CheckButtons(struct FPointerEvent& InputPin, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_2);
	void OnMouseMove_MMB_CameraMove_UpDown(const struct FVector& L_Location, const struct FVector2D& Mouse_MMBDnPosition_New);
	struct FEventReply OnMouseMove_RMB_CameraMove_Rotate(const struct FRotator& L_RotationChar, const struct FVector2D& Mouse_RMBDnPosition_New, bool CallFunc_IsValid_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool Temp_bool_Variable, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool Temp_bool_Variable_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool Temp_bool_Variable_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FRotator& K2Node_Select_Default_1, const struct FRotator& K2Node_Select_Default_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast_2, float CallFunc_MakeRotator_Yaw_ImplicitCast_3, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast_4);
	struct FEventReply OnMouseButtonUp_Border(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown_Border(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Set_Main_Camera(const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetTPMesh_SkeletalMesh, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_HMU_TP_Player_C* K2Node_DynamicCast_AsABP_HMU_TP_Player, bool K2Node_DynamicCast_bSuccess_1, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_2, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, float K2Node_VariableSet_TargetArmLength_ImplicitCast);
	void Refresh_Camera_With_Saved_Pref(bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float K2Node_VariableSet_TargetArmLength_ImplicitCast);
	void RetrieveLastUsedCameraSettings(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void Set_UICamera(const struct FVector& CameraBoomOffset, double Field_Of_View_Default, class UCameraComponent* UI_TP_Camera, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetTPMesh_SkeletalMesh, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_HMU_TP_Player_C* K2Node_DynamicCast_AsABP_HMU_TP_Player, bool K2Node_DynamicCast_bSuccess_1, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, double K2Node_VariableSet_Default_ArmLength_ImplicitCast, double K2Node_VariableSet_Field_Of_View_Default_ImplicitCast);
	void Update_Appearance(const struct FDataTableRowHandle& AppearanceHandle, class UBP_CharacterCustomization_Component_C* CustomizationComponent, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue);
	void ShowConfirmationStage();
	void BndEvt__WBP_CC_CharacterCreation_WBP_CC_sw_MainNavList_K2Node_ComponentBoundEvent_17_CategoryEntrySelected__DelegateSignature(const struct FS_CC_SubCategory& SubCategory, double PresentationIndex);
	void BndEvt__WBP_CC_CharacterCreation_WBP_CC_sw_MainNavList_K2Node_ComponentBoundEvent_19_StageIndexNavigation__DelegateSignature(int32 StageIndex, bool Forward);
	void ConfirmationStage();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__WBP_CC_CharacterCreation_WBP_CC_sw_MainNavList_K2Node_ComponentBoundEvent_1_Focused_MainList__DelegateSignature();
	void BndEvt__WBP_CC_CharacterCreation_WBP_CC_sw_MainNavList_K2Node_ComponentBoundEvent_10_RandomizeAllClicked__DelegateSignature();
	void Construct();
	void BndEvt__WBP_CC_CharacterCreation_wbp_cc_sw_NavButtons_K2Node_ComponentBoundEvent_3_NextEntry__DelegateSignature();
	void BndEvt__WBP_CC_CharacterCreation_wbp_cc_sw_NavButtons_K2Node_ComponentBoundEvent_4_Stage_Advance__DelegateSignature();
	void BndEvt__WBP_CC_CharacterCreation_wbp_cc_sw_NavButtons_K2Node_ComponentBoundEvent_5_Stage_Reverse__DelegateSignature();
	void BndEvt__WBP_CC_CharacterCreation_wbp_cc_sw_NavButtons_K2Node_ComponentBoundEvent_6_PreviousEntry__DelegateSignature();
	void BndEvt__WBP_CC_CharacterCreation_wbp_cc_sw_NavButtons_K2Node_ComponentBoundEvent_7_RandomizeClicked__DelegateSignature();
	void BndEvt__WBP_CC_CharacterCreation_WBP_CC_sw_MainNavList_K2Node_ComponentBoundEvent_8_ResetAllClicked__DelegateSignature();
	void ShowSubPanel();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__WBP_CC_CharacterCreation_wbp_cc_sw_NavButtons_K2Node_ComponentBoundEvent_7_AutoRotate_Toggle__DelegateSignature();
	void BndEvt__WBP_CC_CharacterCreation_wbp_cc_sw_NavButtons_K2Node_ComponentBoundEvent_11_Zoom_Cycle__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_CC_CharacterCreation_WBP_CC_sw_MainNavList_K2Node_ComponentBoundEvent_0_OnBackAction__DelegateSignature();
	void BndEvt__WBP_CC_CharacterCreation_WBP_CC_sw_MainNavList_K2Node_ComponentBoundEvent_9_OnCategoryGamepadSelected__DelegateSignature();
	void BndEvt__WBP_CC_CharacterCreation_WBP_CC_sw_SubNavList_K2Node_ComponentBoundEvent_12_SubNavFocused__DelegateSignature();
	void BndEvt__WBP_CC_CharacterCreation_WBP_CC_sw_SubNavList_K2Node_ComponentBoundEvent_13_SubNavEntrySelected__DelegateSignature(const struct FS_CC_SubPanel& SubPanelData);
	void BndEvt__WBP_CC_CharacterCreation_WBP_CC_sw_SubNavList_K2Node_ComponentBoundEvent_14_SubNavGamepadSelected__DelegateSignature();
	void ExecuteUbergraph_WBP_CC_CharacterCreation(int32 EntryPoint, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWBP_CC_DynamicSubPanel__Base_C* K2Node_DynamicCast_AsWBP_CC_Dynamic_Sub_Panel__Base, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FS_CC_SubCategory& K2Node_ComponentBoundEvent_SubCategory, double K2Node_ComponentBoundEvent_PresentationIndex, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_CC_SubPanel& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_ComponentBoundEvent_StageIndex, bool K2Node_ComponentBoundEvent_Forward, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, bool CallFunc_IsPlayInEditor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_CC_DynamicSubPanel_ComingSoon_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_CC_DynamicSubPanel__Base_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_CC_sw_CharacterNameConfirm_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item_1, class UWBP_CC_sw_MainNavList_Entry_C* K2Node_DynamicCast_AsWBP_CC_Sw_Main_Nav_List_Entry, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UNWXCommonActivatableWidget* K2Node_DynamicCast_AsNWXCommon_Activatable_Widget, bool K2Node_DynamicCast_bSuccess_2, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UNWXCommonActivatableWidget* K2Node_DynamicCast_AsNWXCommon_Activatable_Widget_1, bool K2Node_DynamicCast_bSuccess_3, const struct FS_CC_SubPanel& K2Node_ComponentBoundEvent_SubPanelData, class UWidget* CallFunc_GetChildAt_ReturnValue_3, class UNWXCommonActivatableWidget* K2Node_DynamicCast_AsNWXCommon_Activatable_Widget_2, bool K2Node_DynamicCast_bSuccess_4, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue_1);
	void JoinGameAsNewProfile__DelegateSignature(const struct FCreateProfile& Profile);
	void CC_CameraModeChange__DelegateSignature(enum class E_CC_CameraMode Camera, double Zoom);
	void Scene_AdjustLighting__DelegateSignature(double Lighting);
	void CC_ZoomReturnCamera__DelegateSignature(bool ReturnCamera);
	void CC_ReturnToAppearanceOptions__DelegateSignature();
	void CC_AppearanceSelected__DelegateSignature();
	void CC_PlayerAppearanceUpdate__DelegateSignature(const struct FDataTableRowHandle& AppearanceData);
	void CC_NewProfileCancelled__DelegateSignature();
};

}


