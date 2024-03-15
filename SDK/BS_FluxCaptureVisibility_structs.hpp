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

// 0x34 (0x34 - 0x0)
// UserDefinedStruct BS_FluxCaptureVisibility.BS_FluxCaptureVisibility
struct FBS_FluxCaptureVisibility
{
public:
	enum class EBE_FluxCaptureVisibilityMode     VisibilityMode_42_9273EC4643AD4C97A94CBCB277A4531E; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActorsWithTags_47_FB1C9D8B486CC31A912C34BC8E3BB996; // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class AActor>>          ActorsOfClass_46_F474F1354A588E438BA2FF9CD3391A78; // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<TSoftObjectPtr<class AActor>>         ActorsReferences_50_4C28C99249390853BC748A99A92DADF8; // 0x20(0x10)(Edit, BlueprintVisible)
	bool                                         UseFoliageMeshes_63_108019E4475E89156CB35DA9D2A91E33; // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseInstancedMeshes_64_5640381C4A7506AD66F872A101E54AB7; // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ApplyBottomPlaneCap_40_C31ED51F4B8AA49C2D6869BAB750BD82; // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        ApplyEdgeBlend_54_09C8CBBB4483F8EE11879CBEE5246C09; // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


