/*
 * ========================= esrc_animFrameSet.h ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.04.19
 *                                        MODIFY --
 * ----------------------------------------------------------
 */
#ifndef TPR_ESRC_ANIM_FRAME_SET_H
#define TPR_ESRC_ANIM_FRAME_SET_H

//-------------------- CPP --------------------//
#include <unordered_map>
#include <string>

//-------------------- Engine --------------------//
#include "AnimFrameSet.h"

namespace esrc {//------------------ namespace: esrc -------------------------//

AnimFrameSet &insert_new_animFrameSet( const std::string &name_ );

AnimAction *getnc_animActionPtr(const std::string &animFrameSetName_,
                                const std::string &actionName_ );


}//---------------------- namespace: esrc -------------------------//
#endif

