#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x78 - 0x0)
// UserDefinedStruct S_Guide_Hint.S_Guide_Hint
struct FS_Guide_Hint
{
public:
	class FText                                  LabelOptional_18_63B3F95D443F65FFA623AA9A9635307E; // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  BodyText_19_A18E3998415FFF74A75B8FB8E395C612;      // 0x18(0x18)(Edit, BlueprintVisible)
	class FText                                  Author_22_B3CEAD4F4406D4A0E5ACF38E79565E89;        // 0x30(0x18)(Edit, BlueprintVisible)
	enum class E_HintType                        HintType_15_E6AAA9D44BE8BF6C17C6CE82F4B0C0CE;      // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             HintImageOptional_24_9A95FFDC4D7323A30D5F63AA353081F1; // 0x50(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


