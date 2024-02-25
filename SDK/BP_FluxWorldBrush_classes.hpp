#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x2D9 - 0x2A0)
// BlueprintGeneratedClass BP_FluxWorldBrush.BP_FluxWorldBrush_C
class ABP_FluxWorldBrush_C : public AActor
{
public:
	class UMaterialBillboardComponent*           MaterialBillboard;                                 // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Preview;                                           // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       TargetValue;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BlendAdditive;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShapeHardness;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShapeRoundness;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBE_WorldBrushType                Canvas;                                            // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FluxWorldBrush_C* GetDefaultObj();

	void Draw(class UMaterialInstanceDynamic*& Material, class UBP_FluxWorldPainterComponent_C*& Painter, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_FluxWorldPainter_C> K2Node_DynamicCast_AsBPI_Flux_World_Painter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_1, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_2);
};

}


