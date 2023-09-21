//
// Created by Rostyslav on 21.09.2023.
//

#ifndef CHESS_PIECESCONTROLLER_HPP
#define CHESS_PIECESCONTROLLER_HPP


class PiecesController {
private:
    PiecesController();
public:
    static PiecesController& getInstance();
    PiecesController(PiecesController const&) = delete;
    void operator=(PiecesController const&) = delete;
};


#endif //CHESS_PIECESCONTROLLER_HPP
