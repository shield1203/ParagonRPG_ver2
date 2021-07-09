#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class PARAGONRPG_VER2_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	

protected:
	virtual void BeginPlay() override;

public:	
	APlayerCharacter();
	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
