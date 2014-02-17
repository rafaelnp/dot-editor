/* ========================================================================= */
/* ------------------------------------------------------------------------- */
/*!
  \file			aboutdlg.cc
  \date			Mar 2012
  \author		TNick

  \brief		Contains the implementation for AboutDlg class


*//*


 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 Please read COPYING and README files in root folder
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
/* ------------------------------------------------------------------------- */
/* ========================================================================= */
//
//
//
//
/*  INCLUDES    ------------------------------------------------------------ */

#include	"aboutdlg.h"

using namespace Gui;

/*  INCLUDES    ============================================================ */
//
//
//
//
/*  CLASS    --------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
AboutDlg::AboutDlg					( QWidget *parent ) :
	QDialog(parent)
{

	ui.setupUi(this);


}
/* ========================================================================= */

/* ------------------------------------------------------------------------- */
AboutDlg::~AboutDlg					( void )
{
	/* stub */
}
/* ========================================================================= */

/* ------------------------------------------------------------------------- */
void					AboutDlg::changeEvent			( QEvent *e )
{
	QDialog::changeEvent( e );
	switch ( e->type() ) {
	case QEvent::LanguageChange:	{
		ui.retranslateUi( this );
		break;}
	default:						{
		break;}
	}
}
/* ========================================================================= */


/*  CLASS    =============================================================== */
//
//
//
//
/* ------------------------------------------------------------------------- */
/* ========================================================================= */







