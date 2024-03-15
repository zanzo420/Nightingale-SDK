#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E1 (0x481 - 0x2A0)
// BlueprintGeneratedClass BP_FluxCoastlineDomain.BP_FluxCoastlineDomain_C
class ABP_FluxCoastlineDomain_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  DebugCage;                                         // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildSurface;                                      // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FluxWorldPainterComponent_C*       FluxScenePainterComponent;                         // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FluxJumpFloodComponent_C*          JumpFloodComponent;                                // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FluxHeightMapComponent_C*          FluxHeightMapComponent;                            // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialBillboardComponent*           MaterialBillboard;                                 // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DebugGround;                                       // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         VolumeCollision;                                   // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              CaptureHeightmap;                                  // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPDA_FluxCoastlineState_C*             InitialWorldState;                                 // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPDA_FluxCoastlineState_C*             CurrentWorldState;                                 // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash)
	double                                       RuntimeCaptureDelay;                               // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTileSize_m_;                                    // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HeightmapFullPrecision;                            // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A46A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HeightmapUpdateFrequency;                          // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyInRuntime;                                  // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A46B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChildActorComponent*                  Editor;                                            // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         LoadBrushesFromState;                              // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A46C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WaterSurfaceHeight;                                // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             AreaResolution;                                    // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             AreaWorldSize;                                     // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             AreaWorldSize_km_;                                 // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AreaWorldPixelSize;                                // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A46D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AreaWorldHeight;                                   // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          WorldToSimulationUV;                               // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      BasicInstances;                                    // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTextureRenderTarget2D*                Heightmap;                                         // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                DistanceMap;                                       // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugEditPhantoms;                                 // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugHiddenInGame;                                 // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugPreview;                                      // 0x3AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A46E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                CoastEraseMap;                                     // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                WaveScaleMap;                                      // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CoastlineMap;                                      // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CombineCoastlineData;                              // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CoastlineMapInstance;                              // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugSelectedOnly;                                 // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A46F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBS_FluxCaptureVisibility             CaptureVisibility;                                 // 0x3E0(0x34)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_A470[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SurfaceActorReference;                             // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class AActor>                  SurfaceDefaultClass;                               // 0x420(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	bool                                         AffectWorld;                                       // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A471[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TransistentLoad;                                   // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PostLoadRefreshDelay;                              // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CoastlineMaxWidth;                                 // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DistanceFieldFullPrecision;                        // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        DistanceFieldEdgeIterations;                       // 0x461(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        DistanceFieldLOD;                                  // 0x462(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A472[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              PainterMaterialIntance;                            // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SurfaceActorRenderer;                              // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildSurface2;                                     // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FluxCoastlineDomain_C* GetDefaultObj();

	void UpdateModifierMaterials(TArray<class UMaterialInstanceDynamic*>& Materials, bool UseVelocityMap);
	void Repaint(const TArray<class ABP_FluxWorldBrush_C*>& List, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_FluxWorldBrush_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class ABP_FluxWorldBrush_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Less_IntInt_ReturnValue);
	void LoadGroundMap(class UPDA_FluxCoastlineState_C* InputPin);
	void InitializeRenderSurfaceData(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_FluxSurface_C> K2Node_DynamicCast_AsBPI_Flux_Surface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_DoesImplementInterface_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidSoftClassReference_ReturnValue);
	void RebuildAll(const struct FIntPoint& NumTiles, const struct FVector2D& TileSize, const struct FVector2D& TileLocation, const TArray<class AActor*>& DynamicShow, const TArray<class AActor*>& DynamicHidden);
	void InitializeHeightmap(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FBS_FluxHeightmapDomain& K2Node_MakeStruct_BS_FluxHeightmapDomain, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue);
	void InitlializeState(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FVector& CallFunc_MakeVector_ReturnValue, class UPDA_FluxCoastlineState_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast);
	void BuildSignedDistanceField(double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue);
	void BuildCoastMap();
	void IsEditorOnly(bool* EditorOnly, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void InitializeVolume(double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Conv_IntPointToVector2D_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_Vector2DToVector_Z_ImplicitCast);
	void InitializeRenderTargets(bool Temp_bool_Variable, enum class ETextureRenderTargetFormat Temp_byte_Variable, enum class ETextureRenderTargetFormat Temp_byte_Variable_1, class UTextureRenderTarget2D* CallFunc_RecreateRenderTarget_NewTexture, enum class ETextureRenderTargetFormat K2Node_Select_Default, class UTextureRenderTarget2D* CallFunc_RecreateRenderTarget_NewTexture_1, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UTextureRenderTarget2D* CallFunc_RecreateRenderTarget_NewTexture_2, class UTextureRenderTarget2D* CallFunc_RecreateRenderTarget_NewTexture_3);
	void InitializeEditor(const struct FTransform& Temp_struct_Variable, class UChildActorComponent* CallFunc_AddComponent_ReturnValue, TScriptInterface<class IBPI_FluxTickableEditorEvents_C> K2Node_DynamicCast_AsBPI_Flux_Tickable_Editor_Events, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_FluxTickableEditorEvents_C> K2Node_DynamicCast_AsBPI_Flux_Tickable_Editor_Events_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_FluxTickableEditorEvents_C> K2Node_DynamicCast_AsBPI_Flux_Tickable_Editor_Events_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
	void CaptureGroundHeightmap(bool UpdateSDF, const struct FIntPoint& NumTiles, const struct FVector2D& TileSize, const struct FVector2D& TileLocation, const TArray<class AActor*>& DynamicShow, const TArray<class AActor*>& DynamicHidden, bool CallFunc_IsValid_ReturnValue);
	void RuntimeDelay(bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void InitializeParameters(bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FLinearColor& CallFunc_GetPixelSize_WorldToSimulationUV, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_4, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void UserConstructionScript(bool CallFunc_IsEditorOnly_EditorOnly);
	void ApplyMaterialParameters(TArray<class UMaterialInstanceDynamic*>& Materials);
	void OnEditorStopSimulation();
	void OnEditorRestartSimulation();
	void OnEditorIterateSimulation(int32 Iterations);
	void OnEditorModifierChanged();
	void TogleDebugGround();
	void ToggleUpdateSimulation();
	void ReceiveBeginPlay();
	void OnEditorShowSimulation();
	void OnEditorUpdateLoop();
	void OnEditorPostLoad();
	void EventRuntimeDelay();
	void RenderScenePainter();
	void OnEditorSelectionChanged(bool Selected);
	void OnRepaintBrushes();
	void ExecuteUbergraph_BP_FluxCoastlineDomain(int32 EntryPoint, TArray<class UMaterialInstanceDynamic*>& K2Node_Event_Materials, int32 K2Node_Event_Iterations, bool K2Node_Event_Selected);
};

}


