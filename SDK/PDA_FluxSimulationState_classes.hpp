#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0xC8 - 0x30)
// BlueprintGeneratedClass PDA_FluxSimulationState.PDA_FluxSimulationState_C
class UPDA_FluxSimulationState_C : public UPrimaryDataAsset
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Static;                                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EncodeVelocityMax;                                 // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EncodeHeightMax;                                   // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Iteration;                                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             Resolution;                                        // 0x54(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              GroundMap;                                         // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              VelocityDepthFoamMap;                              // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AreaLocation;                                      // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AreaSize;                                          // 0x88(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              HeightWetMap;                                      // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        LevelOfDetail;                                     // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Compression;                                       // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBS_FluxRectBlend                     AreaBlend;                                         // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CaptureOffset;                                     // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPDA_FluxSimulationState_C* GetDefaultObj();

	void CopyPropertiesToObject(class UObject* Destination, bool* Done, class UPDA_FluxSimulationState_C* TargetObject, class UPDA_FluxSimulationState_C* K2Node_DynamicCast_AsPDA_Flux_Simulation_State, bool K2Node_DynamicCast_bSuccess);
	void GetExternalReferences(TArray<class UTexture*>* Objects, const TArray<class UTexture*>& Temp, class UTexture* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, TArray<class UTexture*>& K2Node_MakeArray_Array);
	void GetExternalFiles(TArray<class UTexture*>* List, const TArray<class UTexture*>& NewLocalVar_0, class UTexture* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, TArray<class UTexture*>& K2Node_MakeArray_Array);
	void GetPathNames(TArray<class FString>* Output_Get, const TArray<class FString>& Output, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBPI_FluxExportData_C> CallFunc_GetExternalReferences_self_CastInput, TArray<class UTexture*>& CallFunc_GetExternalReferences_Objects, class UTexture* CallFunc_Array_Get_Item, const class FString& CallFunc_GetPathName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetEncodeVector(struct FLinearColor* LinearColor, bool Temp_bool_Variable, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_Select_Default, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast);
	void GetDecodeVector(struct FVector* LinearColor, double CallFunc_Conv_BoolToDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void GetLODScale(int32* Integer, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void ApplyMaterialData(TArray<class UMaterialInstanceDynamic*>& MaterialInstances, const struct FBox2D& NewLocalVar_0, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_11, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector4& CallFunc_GetAreaBlendBorders_ReturnValue, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Divide_DoubleDouble_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, const struct FVector& CallFunc_GetDecodeVector_LinearColor, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_8, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_9, int32 CallFunc_Array_Length_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_9, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_10, bool CallFunc_Less_IntInt_ReturnValue_10, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_11, int32 CallFunc_Array_Length_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_11, const struct FLinearColor& CallFunc_GetPixelSize_WorldToSimulationUV, const struct FLinearColor& CallFunc_GetWorldToTextureUV_WorldToTextureUV, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3);
	void GetVolumeTransform(const struct FVector& ExtraSize, const struct FVector& Scale, double ZOffsetScale, struct FTransform* NewParam, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void GetPixelSize(struct FLinearColor* WorldToSimulationUV, const struct FVector2D& CallFunc_Conv_IntPointToVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast);
	void GetWorldToTextureUV(struct FLinearColor* WorldToTextureUV, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast);
	struct FVector4 GetAreaBlendBorders(double CallFunc_FMax_ReturnValue, double CallFunc_FMax_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue_2, double CallFunc_FMax_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_3, const struct FVector4& CallFunc_MakeVector4_ReturnValue, double CallFunc_FMax_A_ImplicitCast, double CallFunc_FMax_A_ImplicitCast_1, double CallFunc_FMax_A_ImplicitCast_2, double CallFunc_FMax_A_ImplicitCast_3);
	void GetTextureSize(struct FIntPoint* Resolution, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UTextureRenderTarget2D* K2Node_DynamicCast_AsTexture_Render_Target_2D, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, const struct FIntPoint& K2Node_MakeStruct_IntPoint, const struct FIntPoint& K2Node_MakeStruct_IntPoint_1);
	void ApplyNiagaraData(class UNiagaraComponent* NiagaraSystem, bool UseGround, bool UseSurface, const struct FVector& CallFunc_GetDecodeVector_LinearColor, const struct FVector4& CallFunc_GetAreaBlendBorders_ReturnValue, const struct FVector2D& CallFunc_Conv_IntPointToVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	void SetSimulationTextures(class UTexture* Surface, class UTexture* Ground, class UTexture* Velocity);
	void SetSimulationWorld(const struct FVector& Location, const struct FVector& Size, int32 Frame, const struct FIntPoint& Resolution, const struct FBS_FluxRectBlend& Blend, double DepthOffset);
	void SetStateConfing(bool StaticFrame, double VelocityNormalization, double HeightNormalization, int32 LevelOfDetail, bool Compression);
	void ClearExternalReferences();
	void ExecuteUbergraph_PDA_FluxSimulationState(int32 EntryPoint);
};

}


