#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x228 (0x6C8 - 0x4A0)
// AnimBlueprintGeneratedClass ABP_Creature_Station_Template.ABP_Creature_Station_Template_C
class UABP_Creature_Station_Template_C : public UNWXStructureAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x4A8(0x2)(HasGetValueTypeHash)
	uint8                                        Pad_A59B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x4B0(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x4B8(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4C0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x4E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x508(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x530(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x578(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x5C0(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x5E0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x600(0xC8)(None)

	static class UClass* StaticClass();
	static class UABP_Creature_Station_Template_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Creature_Station_Template_AnimGraphNode_TransitionResult_5C04E06343FC562ADE79AB943E9E82C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Creature_Station_Template_AnimGraphNode_TransitionResult_C2ACD63E41C9BF02C0576E97552CEA14();
	void ExecuteUbergraph_ABP_Creature_Station_Template(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5);
};

}


