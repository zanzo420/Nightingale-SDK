#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x330 (0x3D0 - 0xA0)
// BlueprintGeneratedClass TimeofDay_Seasons.TimeofDay_Seasons_C
class UTimeofDay_Seasons_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Realm_Profile;                                     // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Seasons_Override;                                  // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_578C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Manual_Season;                                     // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Adjusted_Time;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               Season_Array;                                      // 0xC0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Version_3_Override;                                // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_Seasons                         Season_Type;                                       // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Seasons_Override_WIP;                              // 0xD2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Manual_Function_Override;                          // 0xD3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_578D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               Season_Type_Array;                                 // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Realm_Minus_Season;                                // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Visual_Environment_Preset_Override;                // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_578E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Visual_Environment_Preset;                         // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Realm_Minus_Rapid_Color_Adjust_Preset;             // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rapid_Color_Adjust_Override;                       // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_578F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Sand_Color;                                        // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Sand_Saturation;                                   // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Sand_Brightness;                                   // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Sand_Blend;                                        // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Foliage_Color;                                     // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Foliage_Saturation;                                // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Foliage_Brightness;                                // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Foliage_Blend;                                     // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Bark_Color;                                        // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Bark_Saturation;                                   // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Bark_Brightness;                                   // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Bark_Blend;                                        // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Grass_Color;                                       // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Grass_Saturation;                                  // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Grass_Brightness;                                  // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Grass_Blend;                                       // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Rock_Color;                                        // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Rock_Saturation;                                   // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Rock_Brightness;                                   // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Rock_Blend;                                        // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Water_Color;                                       // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Water_Saturation;                                  // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Water_Brightness;                                  // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Water_Blend;                                       // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Adjust_Amount_Global;                              // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Lightness_Global;                                  // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Sand_Color_Linear;                                 // 0x1D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Foliage_Color_Linear;                              // 0x1E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Bark_Color_Linear;                                 // 0x1F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Grass_Color_Linear;                                // 0x200(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Rock_Color_Linear;                                 // 0x210(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Water_Color_Linear;                                // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rapid_Color_Adjust_VEP_Override;                   // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5790[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MPC_Biome;                                         // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MPC_Manual_Override;                               // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5791[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SideProjection_UVScale;                            // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MacroColor_UVScale;                                // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VistaMacroColor_UVScale;                           // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LandscapeOverlay_UVScale;                          // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Realm_Minus_Glowing_Resource_Toggle;               // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Emissive_Color;                                    // 0x264(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Realm_Minus_Main_Celestial_Color;                  // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  Color_Saturation_Full;                             // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Realm_Minus_Atmosphere_Master_Select;              // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAtmosphere_Master                Visual_Environmet_Preset;                          // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5792[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SeaLevelGradient_Low_Color;                        // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SeaLevelGradient_Mid_Color;                        // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SeaLevelGradient_High_Color;                       // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SeaLevelGradient_BandScale;                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SeaLevelGradient_Mask_Scale;                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Rapid_Color_Biome;                                 // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5793[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UDataTable*>                    Rapid_Color_Master;                                // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Cached_Season;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cached_Sand_Color;                                 // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cached_Foliage_Color;                              // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cached_Bark_Color;                                 // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cached_Grass_Color;                                // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cached_Rock_Color;                                 // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cached_Water_Color;                                // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cached_Sideprojection_UVScale;                     // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cached_Macro_Color_UVScale;                        // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cached_Vista_Macro_Color_UVScale;                  // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cached_Landscale_Overlay_UVScale;                  // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cached_Sea_Level_Gradient_Band_Scale;              // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cached_Sea_Level_Gradient_Mask_Scale;              // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cached_Seal_Level_Gradient_High_Color;             // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cached_Seal_Level_Gradient_Mid_Color;              // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cached_Seal_Level_Gradient_Low_Color;              // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cached_Biome_Index;                                // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Cached_Realm_Season;                               // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               Season_VFXValues;                                  // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Humidity_Dynamic;                                  // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTimeofDay_Seasons_C* GetDefaultObj();

	void MPC_Cache(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_MPC_Biome& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, float K2Node_VariableSet_Cached_Biome_Index_ImplicitCast);
	void Rapid_Color_Adjust_Cache(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_Rapid_Color_Biome& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UDataTable* CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_2, const struct FS_RapidColorAdjust& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor_4, const struct FLinearColor& K2Node_MakeStruct_LinearColor_5, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast_1, float K2Node_MakeStruct_A_ImplicitCast_2, float K2Node_MakeStruct_A_ImplicitCast_3, float K2Node_MakeStruct_A_ImplicitCast_4, float K2Node_MakeStruct_A_ImplicitCast_5);
	void Season_Cache(double* Cached_Season, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_SeasonType& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Glowing_Resource_Adjust(const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_Array_Get_Item, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, bool K2Node_SwitchInteger_CmpSuccess);
	void MPC_Biome_Settings(class UCurveFloat* Desert_Mirage_Lerp, double AdjustedTime24Hour, double CallFunc_FClamp_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_MapRangeUnclamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_FClamp_ReturnValue_2, double CallFunc_MapRangeUnclamped_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_2, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, class FName CallFunc_Array_Get_Item, bool K2Node_SwitchInteger_CmpSuccess, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FName CallFunc_Array_Get_Item_1, const struct FS_MPC_Biome& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_14, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_15, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_16, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_17, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_18, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_19, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_20, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_21, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_22);
	void Rapid_Color_Adjust(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_Conv_ByteToDouble_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, int32 CallFunc_FTrunc_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, class FName CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, const struct FS_Rapid_Color_Biome& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName CallFunc_Array_Get_Item_2, const struct FS_RapidColorAdjust& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class UDataTable* CallFunc_Array_Get_Item_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_4, const struct FS_RapidColorAdjust& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor_4, const struct FLinearColor& K2Node_MakeStruct_LinearColor_5, const struct FLinearColor& K2Node_MakeStruct_LinearColor_6, const struct FLinearColor& K2Node_MakeStruct_LinearColor_7, const struct FLinearColor& K2Node_MakeStruct_LinearColor_8, const struct FLinearColor& K2Node_MakeStruct_LinearColor_9, const struct FLinearColor& K2Node_MakeStruct_LinearColor_10, const struct FLinearColor& K2Node_MakeStruct_LinearColor_11, const struct FLinearColor& K2Node_MakeStruct_LinearColor_12, const struct FLinearColor& K2Node_MakeStruct_LinearColor_13, const struct FLinearColor& K2Node_MakeStruct_LinearColor_14, const struct FLinearColor& K2Node_MakeStruct_LinearColor_15, const struct FLinearColor& K2Node_MakeStruct_LinearColor_16, const struct FLinearColor& K2Node_MakeStruct_LinearColor_17, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_3, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast_1, float K2Node_MakeStruct_A_ImplicitCast_2, float K2Node_MakeStruct_A_ImplicitCast_3, float K2Node_MakeStruct_A_ImplicitCast_4, float K2Node_MakeStruct_A_ImplicitCast_5, float K2Node_MakeStruct_A_ImplicitCast_6, float K2Node_MakeStruct_A_ImplicitCast_7, float K2Node_MakeStruct_A_ImplicitCast_8, float K2Node_MakeStruct_A_ImplicitCast_9, float K2Node_MakeStruct_A_ImplicitCast_10, float K2Node_MakeStruct_A_ImplicitCast_11, float K2Node_MakeStruct_A_ImplicitCast_12, float K2Node_MakeStruct_A_ImplicitCast_13, float K2Node_MakeStruct_A_ImplicitCast_14, float K2Node_MakeStruct_A_ImplicitCast_15, float K2Node_MakeStruct_A_ImplicitCast_16, float K2Node_MakeStruct_A_ImplicitCast_17);
	void Season(double AdjustedTime24Hour, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, const struct FS_SeasonType& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_Conv_IntToDouble_ReturnValue_1, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetFloatParameter_InValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetFloatParameter_InValue_ImplicitCast_1);
	void Initialize_Seasons(double Adjusted_Time);
	void Set_up_references(bool Primary_Function_Override, int32 Realm_Minus_Season, bool Visual_Environment_Preset_Override, int32 Visual_Environment_Preset_, double Manual_Season, int32 Rapid_Color_Adjust_Preset, double Adjust_Amount_Global, double Lightness_Global, bool Rapid_Color_Adjust_Preset_Override, double Sand_Blend, double Foliage_Blend, double Bark_Blend, double Grass_Blend, double Rock_Blend, double Water_Blend, const struct FLinearColor& Sand_Color_Linear, const struct FLinearColor& Foliage_Color_Linear, const struct FLinearColor& Bark_Color_Linear, const struct FLinearColor& Grass_Color_Linear, const struct FLinearColor& Rock_Color_Linear, const struct FLinearColor& Water_Color_Linear, bool Rapid_Color_Adjust_VEP_Override, int32 MPC_Biome, bool MPC_Manual_Override, double SideProjection_UVScale, double MacroColor_UVScale, double VistaMacroColor_UVScale, double LandscapeOverlay_UVScale, int32 Realm_Minus_Glowing_Resource_Toggle, int32 Realm_Minus_Main_Celestial_Color, int32 Realm_Minus_Atmosphere_Master_Select, enum class EAtmosphere_Master Visual_Environmet_Preset, double SeaLevelGradient_BandScale, double SeaLevelGradient_Mask_Scale, const struct FLinearColor& SealLevelGradient_Low_Color, const struct FLinearColor& SealLevelGradient_Mid_Color, const struct FLinearColor& SealLevelGradient_High_Color, int32 Rapid_Color_Biome);
	void ExecuteUbergraph_TimeofDay_Seasons(int32 EntryPoint, double K2Node_CustomEvent_Adjusted_Time, bool K2Node_CustomEvent_Primary_Function_Override, int32 K2Node_CustomEvent_Realm___Season, bool K2Node_CustomEvent_Visual_Environment_Preset_Override, int32 K2Node_CustomEvent_Visual_Environment_Preset_, double K2Node_CustomEvent_Manual_Season, int32 K2Node_CustomEvent_Rapid_Color_Adjust_Preset, double K2Node_CustomEvent_Adjust_Amount_Global, double K2Node_CustomEvent_Lightness_Global, bool K2Node_CustomEvent_Rapid_Color_Adjust_Preset_Override, double K2Node_CustomEvent_Sand_Blend, double K2Node_CustomEvent_Foliage_Blend, double K2Node_CustomEvent_Bark_Blend, double K2Node_CustomEvent_Grass_Blend, double K2Node_CustomEvent_Rock_Blend, double K2Node_CustomEvent_Water_Blend, const struct FLinearColor& K2Node_CustomEvent_Sand_Color_Linear, const struct FLinearColor& K2Node_CustomEvent_Foliage_Color_Linear, const struct FLinearColor& K2Node_CustomEvent_Bark_Color_Linear, const struct FLinearColor& K2Node_CustomEvent_Grass_Color_Linear, const struct FLinearColor& K2Node_CustomEvent_Rock_Color_Linear, const struct FLinearColor& K2Node_CustomEvent_Water_Color_Linear, bool K2Node_CustomEvent_Rapid_Color_Adjust_VEP_Override, int32 K2Node_CustomEvent_MPC_Biome, bool K2Node_CustomEvent_MPC_Manual_Override, double K2Node_CustomEvent_SideProjection_UVScale, double K2Node_CustomEvent_MacroColor_UVScale, double K2Node_CustomEvent_VistaMacroColor_UVScale, double K2Node_CustomEvent_LandscapeOverlay_UVScale, int32 K2Node_CustomEvent_Realm___Glowing_Resource_Toggle, int32 K2Node_CustomEvent_Realm___Main_Celestial_Color, int32 K2Node_CustomEvent_Realm___Atmosphere_Master_Select, enum class EAtmosphere_Master K2Node_CustomEvent_Visual_Environmet_Preset, double K2Node_CustomEvent_SeaLevelGradient_BandScale, double K2Node_CustomEvent_SeaLevelGradient_Mask_Scale, const struct FLinearColor& K2Node_CustomEvent_SealLevelGradient_Low_Color, const struct FLinearColor& K2Node_CustomEvent_SealLevelGradient_Mid_Color, const struct FLinearColor& K2Node_CustomEvent_SealLevelGradient_High_Color, int32 K2Node_CustomEvent_Rapid_Color_Biome, double CallFunc_Season_Cache_Cached_Season);
};

}


