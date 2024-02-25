#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2508 - 0x2500)
// AnimBlueprintGeneratedClass ABP_DOG_Template_Wolf.ABP_DOG_Template_Wolf_C
class UABP_DOG_Template_Wolf_C : public UABP_DOG_Template_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2500(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UABP_DOG_Template_Wolf_C* GetDefaultObj();

	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_DOG_Template_Wolf(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


