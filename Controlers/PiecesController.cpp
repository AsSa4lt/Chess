//
// Created by Rostyslav on 21.09.2023.
//

#include "PiecesController.hpp"


PiecesController::PiecesController() = default;

PiecesController &PiecesController::getInstance() {
    static PiecesController instance;
    return instance;
}