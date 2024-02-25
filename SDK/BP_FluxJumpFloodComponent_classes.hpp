#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xF0 - 0xA0)
// BlueprintGeneratedClass BP_FluxJumpFloodComponent.BP_FluxJumpFloodComponent_C
class UBP_FluxJumpFloodComponent_C : public UActorComponent
{
public:
	int32                                        Size_X;                                            // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Size_Y;                                            // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SourceMaterial;                                    // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    IterationMaterial;                                 // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    ResultMaterial;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Result;                                            // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextureRenderTarget2D*>        TempTextures;                                      // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              IterationInstance;                                 // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ResultInstance;                                    // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SourceInstance;                                    // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FluxJumpFloodComponent_C* GetDefaultObj();

	void Generate(class UTextureRenderTarget2D*& SourceTexture, double Normalization, bool HighPrecission, uint8 Iterations, class UTextureRenderTarget2D* CurrentTexture, int32 StepCount, int32 Flip, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Conv_ByteToDouble_ReturnValue, enum class ETextureRenderTargetFormat Temp_byte_Variable, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Log_ReturnValue, class UTextureRenderTarget2D* CallFunc_Array_Get_Item, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, enum class ETextureRenderTargetFormat Temp_byte_Variable_1, enum class ETextureRenderTargetFormat K2Node_Select_Default, class UTextureRenderTarget2D* CallFunc_Array_Get_Item_1, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2);
};

}


