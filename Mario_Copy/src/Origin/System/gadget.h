
#pragma once
#include "../common.h"


class cGadget {
public:

  // TIPS: �R���X�g���N�^�ł͂Ȃ��A
  //     : ���̊֐����g���ċ@�\��񋟂���
  static cGadget* draw();

  // ���b�Z�[�W�E�B���h�E�̕`��
  void msgBox(const float2& pos,
              const float2& size,
              const Color& color);


private:

  // TIPS: ���̃N���X�𒼐ڐ錾�ł��Ȃ��悤�ɂ���
  cGadget();
};

typedef cGadget  gadget;
