#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x300 (0x7A0 - 0x4A0)
// AnimBlueprintGeneratedClass ABP_BOX_GPR_HUM_BHU_Chest01_Template.ABP_BOX_GPR_HUM_BHU_Chest01_Template_C
class UABP_BOX_GPR_HUM_BHU_Chest01_Template_C : public UNWXStructureAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x4A8(0x3)(HasGetValueTypeHash)
	uint8                                        Pad_A4C1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x4B0(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x4B8(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4C0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x4E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x508(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x530(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x558(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x578(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x5C0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x608(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x628(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x670(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x6B8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x6D8(0xC8)(None)

	static class UClass* StaticClass();
	static class UABP_BOX_GPR_HUM_BHU_Chest01_Template_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_3AE8E61F4E6FD16B0410318B12350C60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_F60AA75149EADC2B415559AD113A885D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_C4363F98475A65848CBD57A430ED81DD();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


