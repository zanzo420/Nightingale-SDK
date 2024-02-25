#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0xC1 - 0xA0)
// BlueprintGeneratedClass BP_FluxWorldPainterComponent.BP_FluxWorldPainterComponent_C
class UBP_FluxWorldPainterComponent_C : public UActorComponent
{
public:
	class UCanvas*                               CanvasObject;                                      // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CanvasSize;                                        // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext            Context;                                           // 0xB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EBE_WorldBrushType                CanvasType;                                        // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FluxWorldPainterComponent_C* GetDefaultObj();

	void SetPainterParameters(TArray<class UMaterialInstanceDynamic*>& Material, struct FTransform& AreaTransform, class UTextureRenderTarget2D* Texture, int32 Temp_int_Variable, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, int32 Temp_int_Variable_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast);
	void SetBrushParameters(class UMaterialInstanceDynamic* Material, const struct FTransform& AreaTransform, const struct FIntPoint& AreaResolution, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector2D& CallFunc_Conv_IntPointToVector2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast);
	void RenderScene(class UTextureRenderTarget2D* TextureRenderTarget, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_FluxWorldPainter_C> K2Node_DynamicCast_AsBPI_Flux_World_Painter, bool K2Node_DynamicCast_bSuccess);
	void DrawRect(class UMaterialInstanceDynamic*& MaterialInstance, const struct FTransform& Transform);
};

}


