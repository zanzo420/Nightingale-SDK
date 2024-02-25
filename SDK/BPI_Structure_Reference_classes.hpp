#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Structure_Reference.BPI_Structure_Reference_C
class IBPI_Structure_Reference_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Structure_Reference_C* GetDefaultObj();

	void SetStructureRef(class AActor* Structure);
	void GetStructureRef(class AActor** Structure);
};

}


