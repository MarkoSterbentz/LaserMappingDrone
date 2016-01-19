set(pqPython_HEADERS_LOADED 1)
set(pqPython_HEADERS "pqPythonDebugLeaksView;pqPythonDebugLeaksView;pqPythonDialog;pqPythonDialog;pqPythonMacroSupervisor;pqPythonMacroSupervisor;pqPythonManager;pqPythonManager;pqPythonScriptEditor;pqPythonScriptEditor;pqPythonShell;pqPythonShell;pqPythonSyntaxHighlighter;pqPythonSyntaxHighlighter;ui_pqPythonDialog")

foreach(header ${pqPython_HEADERS})
  set(pqPython_HEADER_${header}_EXISTS 1)
endforeach()




