<?xml version='1.0' encoding='UTF-8' standalone='yes' ?>
<tagfile>
  <compound kind="file">
    <name>controlador.c</name>
    <path>K:/c/Projects/Automata/</path>
    <filename>controlador_8c</filename>
  </compound>
  <compound kind="file">
    <name>gestor_automata.c</name>
    <path>K:/c/Projects/Automata/</path>
    <filename>gestor__automata_8c</filename>
    <includes id="gestor__automata_8h" name="gestor_automata.h" local="yes" imported="no">gestor_automata.h</includes>
    <member kind="function">
      <type>void</type>
      <name>add_data_matrix</name>
      <anchorfile>gestor__automata_8c.html</anchorfile>
      <anchor>aa7113c5b6be86214a89a8a38d8115aa5</anchor>
      <arglist>(char *data[], int fila_o_columna)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>generar_funcion_transitoria</name>
      <anchorfile>gestor__automata_8c.html</anchorfile>
      <anchor>ae9dfb0859dcd50c42165ca3d4811728b</anchor>
      <arglist>(char **data, int cont)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>get_size</name>
      <anchorfile>gestor__automata_8c.html</anchorfile>
      <anchor>ab2ce88845bdeb5f39c6355c1bafef74b</anchor>
      <arglist>(char *data[])</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>get_posicion</name>
      <anchorfile>gestor__automata_8c.html</anchorfile>
      <anchor>ae64ffea1a004468520dd79584b08eed9</anchor>
      <arglist>(char *data, int fila_o_columna)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>verify_automata</name>
      <anchorfile>gestor__automata_8c.html</anchorfile>
      <anchor>a2e7a4beccfe4359dd2e38e904c9e2d10</anchor>
      <arglist>(char *data[], char *inicio, char *fin[], int cont)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>gestor_automata.h</name>
    <path>K:/c/Projects/Automata/</path>
    <filename>gestor__automata_8h</filename>
    <class kind="struct">s_automata</class>
    <member kind="define">
      <type>#define</type>
      <name>NUM_CHARS</name>
      <anchorfile>gestor__automata_8h.html</anchorfile>
      <anchor>a0cc25433ec45190050d7cd262941e074</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>TRUE</name>
      <anchorfile>gestor__automata_8h.html</anchorfile>
      <anchor>aa8cecfc5c5c054d2875c03e77b7be15d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>FALSE</name>
      <anchorfile>gestor__automata_8h.html</anchorfile>
      <anchor>aa93f0eb578d23995850d61f7d61c55c1</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct s_automata</type>
      <name>automata</name>
      <anchorfile>gestor__automata_8h.html</anchorfile>
      <anchor>a9645fdbd4a05f8416a9cc2d9f825b03c</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>add_data_matrix</name>
      <anchorfile>gestor__automata_8h.html</anchorfile>
      <anchor>aa7113c5b6be86214a89a8a38d8115aa5</anchor>
      <arglist>(char *data[], int fila_o_columna)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>generar_funcion_transitoria</name>
      <anchorfile>gestor__automata_8h.html</anchorfile>
      <anchor>ae9dfb0859dcd50c42165ca3d4811728b</anchor>
      <arglist>(char **data, int cont)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>get_posicion</name>
      <anchorfile>gestor__automata_8h.html</anchorfile>
      <anchor>ae64ffea1a004468520dd79584b08eed9</anchor>
      <arglist>(char *data, int fila_o_columna)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>verify_automata</name>
      <anchorfile>gestor__automata_8h.html</anchorfile>
      <anchor>a2e7a4beccfe4359dd2e38e904c9e2d10</anchor>
      <arglist>(char *data[], char *inicio, char *fin[], int cont)</arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>matrix</name>
      <anchorfile>gestor__automata_8h.html</anchorfile>
      <anchor>aeb7b19e098417b853f22b78229ac4332</anchor>
      <arglist>[NUM_CHARS][NUM_CHARS]</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>main.c</name>
    <path>K:/c/Projects/Automata/</path>
    <filename>main_8c</filename>
    <includes id="gestor__automata_8h" name="gestor_automata.h" local="yes" imported="no">gestor_automata.h</includes>
    <member kind="function">
      <type>int</type>
      <name>main</name>
      <anchorfile>main_8c.html</anchorfile>
      <anchor>ae66f6b31b5ad750f1fe042a706a4e3d4</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_automata</name>
    <filename>structs__automata.html</filename>
    <member kind="variable">
      <type>char *</type>
      <name>alfabeto</name>
      <anchorfile>structs__automata.html</anchorfile>
      <anchor>a4a07cdc9b8090e16085236e0bb6a7de2</anchor>
      <arglist>[NUM_CHARS]</arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>estados</name>
      <anchorfile>structs__automata.html</anchorfile>
      <anchor>a5afbb107d2d060aedeaae528ab434018</anchor>
      <arglist>[NUM_CHARS]</arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>transiciones</name>
      <anchorfile>structs__automata.html</anchorfile>
      <anchor>a8c2a420d3b99e90cc458930cbcb3ce5a</anchor>
      <arglist>[NUM_CHARS][NUM_CHARS]</arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>estado_inicial</name>
      <anchorfile>structs__automata.html</anchorfile>
      <anchor>a131f154053de19a96efb6a5c605b2881</anchor>
      <arglist>[NUM_CHARS]</arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>estados_finales</name>
      <anchorfile>structs__automata.html</anchorfile>
      <anchor>a4045608f0f16c98c3458f72e214db18d</anchor>
      <arglist>[NUM_CHARS]</arglist>
    </member>
  </compound>
</tagfile>
