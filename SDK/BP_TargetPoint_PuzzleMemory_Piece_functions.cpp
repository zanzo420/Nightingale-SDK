#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TargetPoint_PuzzleMemory_Piece.BP_TargetPoint_PuzzleMemory_Piece_C
// (Actor)

class UClass* ABP_TargetPoint_PuzzleMemory_Piece_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TargetPoint_PuzzleMemory_Piece_C");

	return Clss;
}


// BP_TargetPoint_PuzzleMemory_Piece_C BP_TargetPoint_PuzzleMemory_Piece.Default__BP_TargetPoint_PuzzleMemory_Piece_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TargetPoint_PuzzleMemory_Piece_C* ABP_TargetPoint_PuzzleMemory_Piece_C::GetDefaultObj()
{
	static class ABP_TargetPoint_PuzzleMemory_Piece_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TargetPoint_PuzzleMemory_Piece_C*>(ABP_TargetPoint_PuzzleMemory_Piece_C::StaticClass()->DefaultObject);

	return Default;
}

}


