#include "ParagonRPG_ver2GameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

AParagonRPG_ver2GameModeBase::AParagonRPG_ver2GameModeBase()
{
	
}

void AParagonRPG_ver2GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (m_mainWidget != nullptr)
	{
		m_mainWidget->AddToViewport();
	}
}