#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x390 (0xAF0 - 0x760)
// AnimBlueprintGeneratedClass ABP_DOG_DayLoiters.ABP_DOG_DayLoiters_C
class UABP_DOG_DayLoiters_C : public UNWXAILinkedLoiterAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x760(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x768(0x3)(HasGetValueTypeHash)
	uint8                                        Pad_A51D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x770(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x778(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x780(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x7A0(0xB8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x858(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x880(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x8A8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x8F0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x938(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x958(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x9A0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x9E8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xA08(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xAD0(0x20)(None)

	static class UClass* StaticClass();
	static class UABP_DOG_DayLoiters_C* GetDefaultObj();

	void LoiterBehaviour(const struct FPoseLink& InPose, struct FPoseLink* LoiterBehaviour);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_DayLoiters_AnimGraphNode_TransitionResult_E1AF473B4E19D282B7BE0B873B8DD864();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_DayLoiters_AnimGraphNode_TransitionResult_8A988AF346FCB7B3C067AB897F1B064B();
	void ExecuteUbergraph_ABP_DOG_DayLoiters(int32 EntryPoint, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1);
};

}


