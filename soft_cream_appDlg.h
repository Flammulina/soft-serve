
// soft_cream_appDlg.h : �w�b�_�[ �t�@�C��
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// Csoft_cream_appDlg �_�C�A���O
class Csoft_cream_appDlg : public CDialogEx
{
// �R���X�g���N�V����
public:
	Csoft_cream_appDlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^�[

// �_�C�A���O �f�[�^
	enum { IDD = IDD_SOFT_CREAM_APP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g


// ����
protected:
	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDestroy();

private:
	CStatic m_glView;
	CStatic m_glView2;
	CDC *m_pDC;
	HGLRC m_GLRC;
	BOOL SetUpPixelFormat(HDC hdc);
public:
	CEdit msgED;
	LRESULT OnMessageRCV(WPARAM wParam, LPARAM lParam);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
//	CStatic IDC_PICT0;
	afx_msg void OnStnClickedPict0();
private:
	int m_xvRadio;
public:
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	//�ȉ�����
	unsigned int m_nTimer;//�^�C�}�[�ϐ�(��)�@�g�p���Ȃ��C������
	afx_msg void OnTimer(UINT_PTR nIDEvent);//OnTimer�p
	int hide_cone = 0;//�X�C�b�`
	double fall_cream = 0;//������N���[���@0.5���Z�ŗ����\���@Sin�֐��g���H
	//int cream_count = 0;//�N���[���̐��@�X�C�b�`�N������X�V�J�E���g���L�^
	int cream_number[100];//�e�N���[���̔ԍ��Ƃ��Ĕz��
	int cream_color = 0;//�N���[���̐F�������p�ϐ��@�ŏI�I�Ƀe�N�X�`���ɂ���

	//�ȉ�i-sun���ǉ������ϐ�
	double lx, ly;               //���j�A�����xx,y
	double e4x, e4y, e4z;        //e4�e�x�N�g��
	double dx, dy, dz;           //�ړ�
	double maxCen = 0.0, maxDeg = 0.0;       //�X���Ɖ��S�͂̍ō��_
	double saveDeg = 0.0;         //�ŏ��̈��ڂ̒l��ۑ�����ϐ�
	double deterDeg = 0.0;        //0�x����v�������X��
	int    firstCount = 0;          //��񂾂��g���t���O
	CFont *m_newFont;
	
	CFont *m_newFont_test;
private:
	CAnimateCtrl m_xcAnimate_Remaining;//�A�j���[�V�����p�@�N���[���c�ʂɕR�t��
	CAnimateCtrl m_xcAnimate_Result;//���ʉ摜�A�j��
	//CAnimateCtrl m_xcAnimate_Result;

public:
	CEdit msgED1;
	CEdit msgED2;

	//1/7�@�ύX�ӏ�
	CEdit msg_ED_G;//�ŏI���ʁ@���S��
	CEdit msg_ED_D;//�@�@�@�@�@�X��
	CEdit msg_ED_T;//�@�@�@�@�@�����]��
	CString result_text;//���ʃe�L�X�g
	int count_anim=0;//�Q�[�W�A�j���[�V�����J�E���g
	//double cenF_MAX;//���S�͍ő�l
	//double e4Deg_MAX;//�p�x�ő�l

	//1/7�@�����܂�

	//1/11�@�ύX�ӏ�
//	double maxCen = 0.0, maxDeg = 0.0;       //�X���Ɖ��S�͂̍ō��_
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();

	double cream_count = 0;//double�^�ɕύX
	double fall_cream_ch = 0;//�������x�ύX����
	double cream_count_ch = 0;//����

	//2/22�@�ύX�ӏ�
	//��Փx���Ƃɐ��l��ύX�\��

	double cenF_border = 0.0;//���S�͊�l
	double e4Deg_border = 0.0;//�p�x��l

	double cenF_border_easy=1.0;//�ȒP
	double e4Deg_border_easy=6.0;//

	double cenF_border_very_easy = 1.5;//���ȒP(���ݒu)
	double e4Deg_border_very_easy = 9.0;//

	double cenF_border_hard = 0.5;//���
	double e4Deg_border_hard = 3.0;//


	//�ꎞ�I��-���@�{�Ԃł͖߂�
	double cenF_no_move = 0.15;//�����قڂȂ��@1.2
	double e4Deg_no_move = 0;//����@2
	//1/11�@�����܂�
	afx_msg void OnBnClickedRadio4();
};