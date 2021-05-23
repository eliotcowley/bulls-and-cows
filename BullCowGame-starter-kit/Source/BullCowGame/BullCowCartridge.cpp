// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcome the player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the four-letter word.")); // Magic number

    // Set up the game
    HiddenWord = TEXT("cake"); // Set the hidden word

    // Set lives
    // Prompt player for guess
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();

    // Check player guess
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You got it!"));
    }
    else
    {
        PrintLine(TEXT("Nope, sorry!"));
    }

    // Check if isogram
    // Prompt to guess again
    // Check right number of characters
    // Prompt to guess again

    // Remove life

    // Check if Lives > 0
    // If yes, guess again
    // Show lives left
    // If no, show game over and hidden word
    // Prompt to play again, press Enter to play again
    // Check user input
    // Play again or quit
}