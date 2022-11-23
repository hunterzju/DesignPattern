#include "Variable.hpp"
#include "Context.hpp"

int Variable::Interprete(Context *ctx) {
    return ctx->LoopUpValue(this);
}
