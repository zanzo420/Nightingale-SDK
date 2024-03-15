#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x460 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_CompassMarker.WBP_sw_CompassMarker_C
class UWBP_sw_CompassMarker_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               b_Content;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MarkerDistanceText;                                // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               S_Marker;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               S_MarkerParticle;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Marker;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_MarkerText;                                     // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MarkerPrecision;                                   // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MarkerFacingValue;                                 // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Tint;                                              // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        TextVisibilityRange;                               // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       IconVisibiltyRange;                                // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RemoveMarker;                                      // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       Distance_MaxIconSize;                              // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Distance_MinIconSize;                              // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MarkerPosition;                                    // 0x3D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIconAssetLoaded;                                 // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DMI_MarkerIcon;                                    // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                IconSoftRef;                                       // 0x400(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableRowHandle                   MarkerRow;                                         // 0x428(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMobileMarker;                                    // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PlayerPosition;                                    // 0x448(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_CompassMarker_C* GetDefaultObj();

	void UpdateMarkerDistance(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1);
	void UpdateMarkerVisibility(int32 Distance, bool Temp_bool_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, class UObject* Temp_object_Variable, double CallFunc_Vector_Distance_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSliderStyle& K2Node_MakeStruct_SliderStyle, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast);
	void SetupDMI_Icon(class UMaterialInstanceDynamic** DMI_MarkerIcon, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class UWidget* Tooltip(TScriptInterface<class ICompassDynamicDataProviderInterface> CompassDataProvider, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_GetCompassHoverDescription_OutString, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetCompassHoverLabel_OutString, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TScriptInterface<class ICompassDynamicDataProviderInterface> K2Node_DynamicCast_AsCompass_Dynamic_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue_1, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void SetMarkerVisbility(bool VisibiltyFlag, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateMarker(double MarkerPrecision, bool ParticleVisible, const struct FLinearColor& ParticleColor, bool Temp_bool_Variable, double Temp_real_Variable, double K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double K2Node_Select_Option_1_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast);
	void UpdateMarkerTextPositionBehindCamera(double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1);
	void UpdateMarkerTextPosition(bool Temp_bool_Variable, double Temp_real_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double K2Node_Select_Default, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	bool IsCameraFacingMarkedObject(const struct FVector& InVector, const struct FVector2D& A, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_DotProduct2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	double GetMarkerPrecision(double Value, double* ReturnValue2, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void GetMarkerFacingValue(class UCameraComponent* CharacterCamera, double Precision, const struct FVector& MarkerPosition, struct FVector* ForwardVector, struct FVector2D* ReturnValue2, double* FacingValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_GetMarkerPrecision_ReturnValue2, double CallFunc_GetMarkerPrecision_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, double CallFunc_DotProduct2D_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue);
	void UpdateDistanceText(int32 Distance, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText Temp_text_Variable, double CallFunc_Vector_Distance_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText K2Node_Select_Default);
	void OnLoaded_DF08A43A4718CE9997760F8EA2FA7D7A(class UObject* Loaded);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Refresh();
	void UpdateVisibility();
	void ExecuteUbergraph_WBP_sw_CompassMarker(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class ANWXPlayerCameraManager* CallFunc_GetCameraManager_CameraManager, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GetThirdPersonEnabled_ReturnValue, enum class ECameraType Temp_byte_Variable, enum class ECameraType Temp_byte_Variable_1, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_SetupDMI_Icon_DMI_MarkerIcon, enum class ECameraType K2Node_Select_Default, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput, class UCameraComponent* CallFunc_GetCamera_ReturnValue, const struct FVector& CallFunc_GetMarkerFacingValue_ForwardVector, const struct FVector2D& CallFunc_GetMarkerFacingValue_ReturnValue2, double CallFunc_GetMarkerFacingValue_FacingValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsCameraFacingMarkedObject_ReturnValue, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void RemoveMarker__DelegateSignature(class AActor* ActorRef, class UWBP_sw_CompassMarker_C* Widget);
};

}


