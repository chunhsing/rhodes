
#include <windows.h>
#include <string>
#include "../../shared/ruby/ext/rho/rhoruby.h"
#include "../../shared/common/RhoDefs.h"
#include <logging/RhoLog.h>


RHO_GLOBAL void rho_map_location(char* query)
{
}

RHO_GLOBAL void rho_appmanager_load( void* /*httpContext*/, const char* /*szQuery*/)
{
    // Nothing
}

RHO_GLOBAL void rho_sys_report_app_started()
{
}

RHO_GLOBAL void rho_conf_show_log()
{
}

extern "C" const char* rho_native_rhopath()
{
    return "rho/";
}

extern "C" const char* rho_native_get_appname()
{
    return "Rhodes";
}

RHO_GLOBAL const char* rho_native_reruntimepath()
{
    return "rho/";
}

RHO_GLOBAL HWND getMainWnd()
{
	return 0;
}



RHO_GLOBAL void alert_show_status(const char* szTitle, const char* szMessage, const char* szHide)
{
}