//
// Created by Rostyslav on 21.09.2023.
//
#include "vector"
#include "../Pieces/Piece.hpp"

#ifndef CHESS_PIECESCONTROLLER_HPP
#define CHESS_PIECESCONTROLLER_HPP


class PiecesController {
private:
    std::vector<Piece*> _whitePieces;
    std::vector<Piece*> _blackPieces;
    PiecesController();
public:
    static PiecesController& getInstance();
    void AddWhitePiece(Piece* whitePiece);
    void AddBlackPiece(Piece* blackPiece);
    PiecesController(PiecesController const&) = delete;
    void operator=(PiecesController const&) = delete;
};


#endif //CHESS_PIECESCONTROLLER_HPP
