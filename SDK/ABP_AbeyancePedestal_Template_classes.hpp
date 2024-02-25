#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x348 (0x7E8 - 0x4A0)
// AnimBlueprintGeneratedClass ABP_AbeyancePedestal_Template.ABP_AbeyancePedestal_Template_C
class UABP_AbeyancePedestal_Template_C : public UNWXStructureAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x4A8(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x4B0(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4B8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x4D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x500(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x528(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x550(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x578(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x5C0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x5E0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x628(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x648(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x690(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x6B0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x6F8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x718(0xC8)(None)
	class FName                                  Beam_a_Socket_Name;                                // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_AbeyancePedestal_Template_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_CF7CBEA5430730C513BD63924A901F84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_9F3909F448362D48572D14AED16CB3D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_8E46F55F42376983E6A68895DE7D32E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_87F5B74E4B3682A9E76A28A9C7691C75();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_AbeyancePedestal_Template(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


