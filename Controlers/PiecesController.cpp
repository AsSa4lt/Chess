//
// Created by Rostyslav on 21.09.2023.
//

#include "PiecesController.hpp"


PiecesController::PiecesController() = default;

PiecesController &PiecesController::getInstance() {
    static PiecesController instance;
    return instance;
}

void PiecesController::AddWhitePiece(Piece *whitePiece) {
    _whitePieces.push_back(whitePiece);
}
void PiecesController::AddBlackPiece(Piece *blackPiece) {
    _whitePieces.push_back(blackPiece);
}
