<?php
/**
 * @file
 * resource_teaching_materials.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function resource_teaching_materials_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Education Resources',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'resource_teaching_materials' => 'resource_teaching_materials',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'esri_two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'esri_two_66_33_top' => NULL,
      'esri_two_66_33_first' => NULL,
      'esri_two_66_33_second' => NULL,
      'esri_two_66_33_bottom' => NULL,
      'esri_two_66_33_sec_header' => NULL,
      'esri_two_66_33_sec_first' => NULL,
      'esri_two_66_33_sec_second' => NULL,
      'esri_two_66_33_sec_third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'esri_two_66_33_first';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['esri_two_66_33_first'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'esri_two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cr_file_entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_download_button_agree',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link_title' => 'Download',
        'agreement' => array(
          'value' => 'MASTER DATA USE AGREEMENT FOR ARCCANADA 4 ONLINE DATA RESOURCE

THIS IS A LEGAL AGREEMENT BETWEEN YOU AND ESRI CANADA LIMITED (“ESRI CANADA”).

PLEASE CAREFULLY READ ALL OF THE APPLICABLE TERMS AND CONDITIONS OF THIS MASTER DATA USE AGREEMENT SET OUT BELOW AND THE ADDITIONAL TERMS OF USE SET OUT UNDER THE REFERENCED SCHEDULES.

IF YOU ACCEPT THE TERMS AND CONDITIONS OF THIS MASTER DATA USE AGREEMENT, PLEASE SUBMIT AN “I AGREE” RESPONSE IN THE MANNER INDICATED BELOW. PLEASE NOTE THAT THE ACTION OF SUBMITTING AN “I AGREE” RESPONSE INDICATES YOUR ACCEPTANCE OF THIS MASTER DATA USE AGREEMENT AND THAT YOU INTEND TO BE LEGALLY AND CONTRACTUALLY BOUND BY ITS APPLICABLE TERMS AND CONDITIONS.

IF YOU DO NOT AGREE WITH THE TERMS AND CONDITIONS OF THIS MASTER DATA USE AGREEMENT PLEASE SUBMIT AN “I DO NOT AGREE” RESPONSE IN WHICH CASE YOU WILL NOT BE PERMITTED TO ACCESS AND USE THE ARCCANADA 4 DATA RESOURCES.

The data available for download from ESRI Canada’s ArcCanada 4 Online Resource Centre (“ArcCanada 4 Data”) is COPYRIGHTED data and shall only be used in your educational institution.

You are granted a non-exclusive, non-assignable and revocable licence to use the ArcCanada 4 Data within your organization or at your home (educators ONLY) with the bundle software (ArcView or ArcVoyager). However you may NOT reproduce, reprint, sell, sublease, rent, loan, give away, or disseminate the ArcCanada 4 Data or any analysis produced using the ArcCanada 4 Data to anyone outside your organization, without prior written consent from ESRI Canada Limited. This includes, but is not limited to, complete tabular printouts and computer readable files extracted in any way, in whole or in part.

For avoidance of doubt students, library patrons, or anyone not directly employed by your organization may use the ArcCanada 4 Data while at your school or library, but may not take any part of this ArcCanada 4 Data off the premises.

FOR AVOIDANCE OF DOUBT USERS CANNOT USE THE ARCCANADA 4 DATA FOR COMMERCIAL PURPOSES - IT IS FOR EDUCATIONAL USE ONLY.

ArcCanada 4 Data also includes data acquired by ESRI Canada from the following third party data sources:

1.      Natural Resources Canada (NRCAN) – The data source for GeoGratis and GeoBase® datasets.

2.      Agriculture and Agri-Food Canada (AAFC) - The data source for AAFC Datasets.

3.      Elections Canada - The data source for the Electoral District Boundaries (2003 Representation Order) and Polling Division Boundaries (39th General Election) Datasets.

4.      University of Toronto - The data source for Historical Atlas of Canada Datasets.

5.      Indian and Northern Affairs Canada (INAC) - The data source for INAC Datasets.

6.      Parks Canada - The data source for Parks Canada Datasets.

7.      Statistics Canada - The data source for the Statistics Canada’s 2009 Road Network File database and the Boundary Files, 2006 Census database.

8.      Niagara Escarpment Commission (NEC)– The data source for NEC Datasets.

There are additional data use terms and conditions that each of the above listed data sources and ESRI Canada require you to comply with to ensure lawful use of any such third party data included within the ArcCanada 4 Data Resource.

The applicable additional data use terms and conditions for each of the data sources noted above are provided under the following Schedules which are hereby incorporated under this agreement:



 

 

SCHEDULE 1

Additional Data Use Terms and Conditions for GeoBase® Data sourced by ESRI Canada from NRCAN:

(i)                The user of GeoBase® data (“ArcCanada 4 Data Licensee”) acknowledges and agrees that Her Majesty the Queen in Right of Canada (Canada) is the owner is the owner, or a licensee, of intellectual property rights in GeoBase® data and has licensed to ESRI Canada certain rights to the GeoBase® data, including the right to sublicense those rights to third parties, on certain terms and conditions.

(ii)              The ArcCanada 4 Data Licensee acknowledges and agrees that GeoBase® is the data source for all GeoBase® data.

(iii)             The ArcCanada 4 Data Licensee acknowledges and agrees that any use of the GeoBase® data available under ESRI Canada’s ArcCanada 4 Online Resource Centre shall not be construed as an endorsement by GeoBase® of ESRI Canada’s ArcCanada 4 Online Resource Centre.

(iv)             The ArcCanada 4 Data Licensee acknowledges and agrees that that the GeoBase®  data is provided “as-is” and that Canada and ESRI Canada make no representation or warranty of any kind with respect to the accuracy, usefulness, novelty, validity, scope, completeness or currency of the GeoBase® data and expressly disclaims any implied warranty of merchantability or fitness for a particular purpose of the GeoBase® data. Canada and ESRI Canada do not ensure or warrant compatibility with past, current or future versions of your browser to access the site\'s GeoBase® data.

(v)              The ArcCanada 4 Data Licensee shall have no recourse against Canada or ESRI Canada, whether by way of any suit or action, for any loss, liability, damage or cost that the GeoBase® User may suffer or incur at any time, by reason of the ArcCanada 4 Data Licensee\'s possession or use of the GeoBase® data.

(vi)             The ArcCanada 4 Data Licensee shall indemnify Canada and ESRI Canada and their respective officers, employees, agents and contractors from all claims alleging loss, costs, expenses, damages or injuries (including injuries resulting in death) arising out of the ArcCanada 4 Data Licensee \'s possession or use of the GeoBase® data.

(vii)            The ArcCanada 4 Data Licensee’s liability to indemnify Canada and ESRI Canada under this data use agreement shall not affect or prejudice Canada or ESRI Canada from exercising any other rights under law.

(viii)          ESRI Canada shall have the immediate right to terminate all data user rights granted by ESRI Canada if the ArcCanada 4 Data Licensee permits or commits a breach of any of its covenants or obligations under this Schedule or the data use agreement. All disclaimers, warranties and indemnities shall survive any such termination.

 



 

SCHEDULE 2

 

Additional Data Use Terms and Conditions for GeoGratis Data sourced by ESRI Canada from NRCAN:

 

(i)                The user of GeoGratis data (“ArcCanada 4 Data Licensee”) acknowledges and agrees that Her Majesty the Queen in Right of Canada (Canada) is the owner is the owner, or a licensee, of intellectual property rights in GeoGratis data and has licensed to ESRI Canada certain rights to the GeoGratis data, including the right to sublicense those rights to third parties, on certain terms and conditions.

(ii)              The ArcCanada 4 Data Licensee acknowledges and agrees that the following is the applicable  data source copyright notice for all GeoGratis data :

 

"© Department of Natural Resources Canada. All rights reserved."

 

(iii)             The ArcCanada 4 Data Licensee acknowledges and agrees that any use of the GeoGratis data available under ESRI Canada’s ArcCanada 4 Online Resource Centre shall not be construed as an endorsement by GeoGratis of ESRI Canada’s ArcCanada 4 Online Resource Centre.

(iv)             The ArcCanada 4 Data Licensee acknowledges and agrees that that the GeoGratis data is provided “as-is” and that Canada and ESRI Canada make no representation or warranty of any kind with respect to the accuracy, usefulness, novelty, validity, scope, completeness or currency of the GeoGratis data and expressly disclaims any implied warranty of merchantability or fitness for a particular purpose of the GeoGratis data. Canada and ESRI Canada do not ensure or warrant compatibility with past, current or future versions of your browser to access the site\'s GeoGratis data.

(v)              The ArcCanada 4 Data Licensee shall have no recourse against Canada or ESRI Canada, whether by way of any suit or action, for any loss, liability, damage or cost that the ArcCanada 4 Data Licensee may suffer or incur at any time, by reason of the ArcCanada 4 Data Licensee’s possession or use of the GeoGratis data.

(vi)             The ArcCanada 4 Data Licensee shall indemnify Canada and ESRI Canada and their respective officers, employees, agents and contractors from all claims alleging loss, costs, expenses, damages or injuries (including injuries resulting in death) arising out of the ArcCanada 4 Data Licensee \'s possession or use of the GeoGratis data.

(vii)            The ArcCanada 4 Data Licensee’s liability to indemnify Canada and ESRI Canada under this data use agreement shall not affect or prejudice Canada or ESRI Canada from exercising any other rights under law.

(viii)          ESRI Canada shall have the immediate right to terminate all data use rights granted by ESRI Canada if the ArcCanada 4 Data Licensee permits or commits a breach of any of its covenants or obligations under this Schedule or the data use agreement. All disclaimers, warranties and indemnities shall survive any such termination.

SCHEDULE 3

 

Additional Data Use Terms and Conditions for AAFC Datasets sourced by ESRI Canada from AAFC:

 

(i)                The user of AAFC Datasets (“ArcCanada 4 Data Licensee”) acknowledges and agrees that Her Majesty the Queen in Right of Canada (Canada) is the owner, or a licensee, of intellectual property rights in AAFC Datasets (the “Canada Digital Data”) and has licensed to ESRI Canada certain rights to the AAFC Datasets, including the right to sublicense those rights to third parties, on certain terms and conditions.

(ii)              ArcCanada 4 Data Licensee’s right to use the Canada Digital Data is subject to the ArcCanada 4 Data Licensee including and maintaining on all reproductions of the Canada Digital Data, as well as all metadata that was provided ESRI Canada with the Canada Digital Data, the following notice:

 

“Reproduced and distributed with the permission of ESRI Canada, authorized licensee of Agriculture and Agri-Food Canada."

 

(iii)             ArcCanada 4 Data Licensee shall include on all products ArcCanada 4 Data Licensee develops or causes to be developed in the exercise of ArcCanada 4 Data Licensee\'s user rights,, in a prominent location, the following notice:

 

“This product has been produced by or for __________ (ArcCanada 4 Data Licensee\'s name) and includes data provided by Agriculture and Agri-Food Canada.”

 

“The incorporation of data sourced from Agriculture and Agri-Food Canada* within this product shall not construed as constituting an endorsement by Agriculture and Agri-Food Canada.”

 

(iv)             All copyright, other proprietary notices of Canada and metadata appearing on or incorporated into the Canada Digital Data, as well as any and all conditions of use associated with the Canada Digital Data, shall be incorporated and maintained on all reproductions thereof.

(v)              ArcCanada 4 Data Licensee shall not disassemble, decompile or in any way attempt to reverse engineer the Canada Digital Data or any part thereof.

(vi)             ArcCanada 4 Data Licensee shall not merge or link the Canada Digital Data with any product or database in such a fashion that gives the appearance that ArcCanada 4 Data Licensee may have received, or had access to, information held by Canada about any identifiable individual, family, household, organization or business.

(vii)            ArcCanada 4 Data Licensee acknowledges and agrees that Canada or ESRI Canada has made no representation or warranty of any kind with respect to the accuracy, usefulness, novelty, validity, scope, completeness or currency of the Canada digital data and has expressly disclaimed any implied warranty of merchantability or fitness for a particular purpose of the Canada digital data.

(viii)          ArcCanada 4 Data Licensee shall have no recourse against Canada or ESRI Canada , whether by way of any suit or action or other, for any loss, liability, damage or cost that ArcCanada 4 Data Licensee may suffer or incur at any time, by reason of ArcCanada 4 Data Licensee\'s possession or use of the Canada digital data.

(ix)             ArcCanada 4 Data Licensee acknowledges and agrees that any use of the Canada digital data available under ESRI Canada’s ArcCanada 4 Online Resource Centre shall not be construed as an endorsement by Canada of ESRI Canada’s ArcCanada 4 Online Resource Centre.

(x)              The ArcCanada 4 Data Licensee shall indemnify Canada and ESRI Canada and their respective officers, employees, agents and contractors from all claims alleging loss, costs, expenses, damages or injuries (including injuries resulting in death) arising out of the ArcCanada 4 Data Licensee \'s possession or use of the Canada digital data.

(xi)             The ArcCanada 4 Data Licensee’s liability to indemnify Canada and ESRI Canada under this data use agreement shall not affect or prejudice Canada or ESRI Canada from exercising any other rights under law.

(xii)            ESRI Canada shall have the immediate right to terminate all data use rights granted by ESRI Canada if the ArcCanada 4 Data Licensee permits or commits a breach of any of its covenants or obligations under this Schedule or the data use agreement. All disclaimers, warranties and indemnities shall survive any such termination.

 



 

SCHEDULE 4

 

Additional Data Use Terms and Conditions for the Electoral District Boundaries (2003 Representation Order) and Polling Division Boundaries (39th General Election) Datasets (the “Elections Canada Datasets”) sourced by ESRI Canada from Elections Canada:

(i)                The user of Elections Canada Datasets (“ArcCanada 4 Data Licensee”) acknowledges and agrees that Her Majesty the Queen in Right of Canada (Canada) holds and shall retain the sole and exclusive worldwide copyright to the Elections Canada Datasets and other rights pertaining in any way to Elections Canada Datasets as used or otherwise made available under ESRI Canada’s ArcCanada 4 Online Resource Centre and has licensed to ESRI Canada certain rights to the Elections Canada Datasets, including the right to sublicense those rights to third parties, on certain terms and conditions.

(ii)              The ArcCanada 4 Data Licensee acknowledges and agrees that the following is the applicable  data source copyright notice for the Elections Canada Datasets :

 

"© The federal Electoral Districts Boundaries (Representation Order 2003) and Polling Division Boundaries (39th General Election), Elections Canada.  All rights reserved. Reproduced with the permission of Elections Canada, Ottawa, Ontario K1A 0M6 Canada (2007)."

 

(iii)             ArcCanada 4 Data Licensee acknowledges and agrees that any use of the Elections Canada Datasets available under ESRI Canada’s ArcCanada 4 Online Resource Centre must not:

(a)          be in an undignified context;

(b)          be considered unfair, misleading or inaccurate;

(c)           be used for advertising purposes in an undesirable manner;

(d)          be used in a context that may prejudice or harm a third party;

(e)          be considered inappropriate by Elections Canada;

(f)           be considered out-of-date;

(g)          infringe on the proprietary rights of third parties; or

(h)          suggest an official endorsement by Canada or Elections Canada where none exists.

The violation of any of the above criteria renders ArcCanada 4 Data Licensee’s right to use the Elections Canada Datasets null and void.

 

(iv)             ArcCanada 4 Data Licensee acknowledges and agrees that Elections Canada or ESRI Canada may at any reasonable time, upon notice to the ArcCanada 4 Data Licensee, have access to the Elections Canada Datasets being used by the ArcCanada 4 Data Licensee in order to permit Elections Canada or ESRI Canada to inspect the Elections Canada Datasets and to verify its conformity with the terms and conditions of its permitted use.

(v)              All copyright, other proprietary notices of Canada and metadata appearing on or incorporated into the Elections Canada Datasets, as well as any and all conditions of use associated with the Elections Canada Datasets, shall be incorporated and maintained on all reproductions thereof.

(vi)             ArcCanada 4 Data Licensee acknowledges and agrees that Canada, Elections Canada and ESRI Canada make no representation or warranty of any kind with respect to the accuracy, usefulness, novelty, validity, scope, completeness or currency of the Elections Canada Datasets and expressly disclaim any implied warranty of merchantability or fitness for a particular purpose of the Elections Canada Datasets.  Canada, Elections Canada and ESRI Canada do not ensure or warrant compatibility with past, current or future versions of any web Site browser to access the Elections Canada Datasets.

(vii)            ArcCanada 4 Data Licensee shall have no recourse against Canada, Elections Canada or ESRI Canada, whether by way of any suit or action or other, for any loss, liability, damage or cost that ArcCanada 4 Data Licensee may suffer or incur at any time, by reason of ArcCanada 4 Data Licensee\'s possession or use of the Elections Canada Datasets.

(viii)          ArcCanada 4 Data Licensee acknowledges and agrees that any use of the Elections Canada Datasets available under ESRI Canada’s ArcCanada 4 Online Resource Centre shall not be construed as an endorsement by Canada or Elections Canada of ESRI Canada’s ArcCanada 4 Online Resource Centre.

(ix)             ArcCanada 4 Data Licensee acknowledges and agrees that any of ESRI Canada’s interpretations and/or commentary to the Elections Canada Datasets available under ESRI Canada’s ArcCanada 4 Online Resource Centre are the sole responsibility and choice of ESRI Canada and shall not be construed as an endorsement by Canada or Elections Canada of such ESRI Canada interpretations and/or commentary to the Elections Canada Datasets.

(x)              The ArcCanada 4 Data Licensee shall be responsible for, and shall at all times indemnify and hold harmless Canada, Elections Canada and ESRI Canada, their respective officers, employees, agents and contractors from and against any and all claims, demands, losses, costs, damages, injuries, causes of action, actions, suits or other proceedings whatsoever by reason of or arising out of the ArcCanada 4 Data Licensee\'s use of the Elections Canada Datasets or the ArcCanada 4 Data Licensee\'s exploitation of the rights granted under this data use agreement .

(xi)             The ArcCanada 4 Data Licensee’s liability to indemnify Canada, Election Canada and ESRI Canada under this data use agreement shall not affect or prejudice Canada, Elections Canada or ESRI Canada from exercising any other rights under law.

(xiii)          All data user rights granted by ESRI Canada shall automatically terminate without notice if ArcCanada 4 Data Licensee permits or commits a breach of any of its covenants or obligations under this Schedule or the data use agreement. All disclaimers, warranties and indemnities shall survive any such termination.

 

 



 

SCHEDULE 5

 

Additional Data Use Terms and Conditions for Historical Atlas of Canada data and geographic digital files (“Historical Atlas of Canada Datasets”) sourced by ESRI Canada from University of Toronto:

(i)            The user of Historical Atlas of Canada Datasets (“ArcCanada 4 Data Licensee”) acknowledges and agrees that the GIS and Cartography Office and the University of Toronto is the owner is the owner, or a licensee, of intellectual property rights in Historical Atlas of Canada Datasets and has licensed to ESRI Canada certain rights to the Historical Atlas of Canada Datasets, including the right to sublicense those rights to third parties, on certain terms and conditions.

(ii)           The ArcCanada 4 Data Licensee acknowledges and agrees that University of Toronto and the Historical Atlas of Canada Project are the data providers for all Historical Atlas of Canada Datasets.

(iii)          The ArcCanada 4 Data Licensee acknowledges and agrees that any use of the Historical Atlas of Canada Datasets available under ESRI Canada’s ArcCanada 4 Online Resource Centre shall be only for the purposes of ESRI Canada’s ArcCanada 4 Online project and shall not be construed as an endorsement by University of Toronto of ESRI Canada’s ArcCanada 4 Online Resource Centre.

(iv)          The ArcCanada 4 Data Licensee acknowledges and agrees that that the Historical Atlas of Canada Datasets is provided “as-is” and that University of Toronto and ESRI Canada make no representation or warranty of any kind with respect to the accuracy, usefulness, novelty, validity, scope, completeness or currency of the Historical Atlas of Canada Datasets and expressly disclaims any implied warranty of merchantability or fitness for a particular purpose of the Historical Atlas of Canada Datasets. University of Toronto and ESRI Canada do not ensure or warrant compatibility with past, current or future versions of your browser to access the site\'s Historical Atlas of Canada Datasets.

(v)           The ArcCanada 4 Data Licensee shall have no recourse against University of Toronto or ESRI Canada, whether by way of any suit or action, for any loss, liability, damage or cost that the ArcCanada 4 Data Licensee may suffer or incur at any time, by reason of the ArcCanada 4 Data Licensee’s possession or use of the Historical Atlas of Canada Datasets.

(vi)          The ArcCanada 4 Data Licensee shall indemnify University of Toronto and ESRI Canada and their respective officers, employees, agents and contractors from all claims alleging loss, costs, expenses, damages or injuries (including injuries resulting in death) arising out of the ArcCanada 4 Data Licensee \'s possession or use of the Historical Atlas of Canada Datasets.

(vii)         The ArcCanada 4 Data Licensee’s liability to indemnify University of Toronto and ESRI Canada under this data use agreement shall not affect or prejudice University of Toronto or ESRI Canada from exercising any other rights under law.

(viii)        ESRI Canada shall have the immediate right to terminate all data use rights granted by ESRI Canada if the ArcCanada 4 Data Licensee permits or commits a breach of any of its covenants or obligations under this Schedule or the data use agreement. All disclaimers, warranties and indemnities shall survive any such termination.

SCHEDULE 6

 

Additional Data Use Terms and Conditions for the Indian and Northern Affairs Canada Datasets (“INAC Datasets”) sourced by ESRI Canada from Indian and Northern Affairs Canada:

 (i)           The user of INAC Datasets (“ArcCanada 4 Data Licensee”) acknowledges and agrees that Her Majesty the Queen in Right of Canada (Canada) holds and shall retain the sole and exclusive worldwide copyright to the INAC Datasets and other rights pertaining in any way to INAC Datasets as used or otherwise made available under ESRI Canada’s ArcCanada 4 Online Resource Centre and has licensed to ESRI Canada certain rights to the INAC Datasets, including the right to sublicense those rights to third parties, on certain terms and conditions.

(ii)           The ArcCanada 4 Data Licensee acknowledges and agrees that the Indian and Northern Affairs Canada (“INAC”) is the applicable data source provider for the INAC Datasets :

(iii)          ArcCanada 4 Data Licensee acknowledges and agrees that any use of the INAC Datasets available under ESRI Canada’s ArcCanada 4 Online Resource Centre must not: (a) be in an undignified context; (b) be considered unfair, misleading or inaccurate; (c) be used in a context that may prejudice or harm a third party; or  (d) infringe on the proprietary rights of third parties.

(iv)          ArcCanada 4 Data Licensee acknowledges and agrees that INAC or ESRI Canada may at any reasonable time, upon notice to the ArcCanada 4 Data Licensee, have access to the INAC Datasets being used by the ArcCanada 4 Data Licensee in order to permit INAC or ESRI Canada to inspect the INAC Datasets and to verify its conformity with the terms and conditions of its permitted use.

(v)           All copyright, other proprietary notices of Canada and metadata appearing on or incorporated into the INAC Datasets, as well as any and all conditions of use associated with the INAC Datasets, shall be incorporated and maintained on all reproductions thereof.

(vi)          ArcCanada 4 Data Licensee acknowledges and agrees that Canada, INAC and ESRI Canada make no representation or warranty of any kind with respect to the accuracy, usefulness, novelty, validity, scope, completeness or currency of the INAC Datasets and expressly disclaim any implied warranty of merchantability or fitness for a particular purpose of the INAC Datasets.  Canada, INAC and ESRI Canada do not ensure or warrant compatibility with past, current or future versions of any web Site browser to access the INAC Datasets.

(vii)         ArcCanada 4 Data Licensee shall have no recourse against Canada, INAC or ESRI Canada, whether by way of any suit or action or other, for any loss, liability, damage or cost that ArcCanada 4 Data Licensee may suffer or incur at any time, by reason of ArcCanada 4 Data Licensee\'s possession or use of the INAC Datasets.

(viii)        ArcCanada 4 Data Licensee acknowledges and agrees that any use of the INAC Datasets available under ESRI Canada’s ArcCanada 4 Online Resource Centre shall not be construed as an endorsement by Canada or INAC of ESRI Canada’s ArcCanada 4 Online Resource Centre.

(ix)          ArcCanada 4 Data Licensee acknowledges and agrees that any of ESRI Canada’s interpretations and/or commentary to the INAC Datasets available under ESRI Canada’s ArcCanada 4 Online Resource Centre is the sole responsibility and choice of ESRI Canada and shall not be construed as an endorsement by Canada or INAC of such ESRI Canada interpretations and/or commentary to the INAC Datasets.

(x)           The ArcCanada 4 Data Licensee shall be responsible for, and shall at all times indemnify and hold harmless Canada, INAC and ESRI Canada, their respective officers, employees, agents and contractors from and against any and all claims, demands, losses, costs, damages, injuries, causes of action, actions, suits or other proceedings whatsoever by reason of or arising out of the ArcCanada 4 Data Licensee\'s use of the INAC Datasets or the ArcCanada 4 Data Licensee\'s exploitation of the rights granted under this data use agreement.

(xi)          The ArcCanada 4 Data Licensee’s liability to indemnify Canada, Election Canada and ESRI Canada under this data use agreement shall not affect or prejudice Canada, INAC or ESRI Canada from exercising any other rights under law.

(xiii)        ESRI Canada shall have the immediate right to terminate all data user rights granted by ESRI Canada if the ArcCanada 4 Data Licensee permits or commits a breach of any of its covenants or obligations under this Schedule or the data use agreement. All disclaimers, warranties and indemnities shall survive any such termination.



 

SCHEDULE 7

 

Additional Data Use Terms and Conditions for Parks Canada Datasets sourced by ESRI Canada from Parks Canada:

(i)            The user of Parks Canada Datasets (“ArcCanada 4 Data Licensee”) acknowledges and agrees that Her Majesty the Queen in Right of Canada (Canada) holds and shall retain the sole and exclusive worldwide copyright to the Parks Canada Datasets and other rights pertaining in any way to Parks Canada Datasets as used or otherwise made available under ESRI Canada’s ArcCanada 4 Online Resource Centre and has licensed to ESRI Canada certain rights to the Parks Canada Datasets, including the right to sublicense those rights to third parties, on certain terms and conditions.

(ii)           The ArcCanada 4 Data Licensee acknowledges and agrees that:

 (a) Parks Canada is the applicable data source department for the Parks Canada Datasets;

(b) Parks Canada Datasets must be referenced and acknowledged at the time it is used, singularly or integrated with a larger database, in the following manner:

Name of Dataset/<Name of National Park, or National Historic Site, or National Marine Conservation Area>/Parks Canada

(c) When displaying the prediction of climate change (years 2040-2060 and 2080-3000) datasets the following statement must accompany the data:

“These climate change projections are for illustrative purposes only and do not reflect the most recent global climate model results”.

(iii)          ArcCanada 4 Data Licensee acknowledges and agrees that any use of the Parks Canada Datasets available under ESRI Canada’s ArcCanada 4 Online Resource Centre must not must not: (a) be in an undignified context; (b) be considered unfair, misleading or inaccurate; (c)      be used in a context that may prejudice or harm a third party; or (d) infringe on the proprietary rights of third parties.

 (iv)         ArcCanada 4 Data Licensee acknowledges and agrees that Parks Canada or ESRI Canada may at any reasonable time, upon notice to the ArcCanada 4 Data Licensee, have access to the Parks Canada Datasets being used by the ArcCanada 4 Data Licensee in order to permit Parks Canada or ESRI Canada to inspect the Parks Canada Datasets and to verify its conformity with the terms and conditions of its permitted use.

(v)           All copyright, other proprietary notices of Canada and metadata appearing on or incorporated into the Parks Canada Datasets, as well as any and all conditions of use associated with the Parks Canada Datasets, shall be incorporated and maintained on all reproductions thereof.

(vi)          ArcCanada 4 Data Licensee acknowledges and agrees that Canada, Parks Canada and ESRI Canada make no representation or warranty of any kind with respect to the accuracy, usefulness, novelty, validity, scope, completeness or currency of the Parks Canada Datasets and expressly disclaim any implied warranty of merchantability or fitness for a particular purpose of the Parks Canada Datasets.  Canada, Parks Canada and ESRI Canada do not ensure or warrant compatibility with past, current or future versions of any web Site browser to access the Parks Canada Datasets.

(vii)         ArcCanada 4 Data Licensee shall have no recourse against Canada, Parks Canada or ESRI Canada, whether by way of any suit or action or other, for any loss, liability, damage or cost that ArcCanada 4 Data Licensee may suffer or incur at any time, by reason of ArcCanada 4 Data Licensee\'s possession or use of the Parks Canada Datasets.

(viii)        ArcCanada 4 Data Licensee acknowledges and agrees that any use of the Parks Canada Datasets available under ESRI Canada’s ArcCanada 4 Online Resource Centre shall not be construed as an endorsement by Canada or Parks Canada of ESRI Canada’s ArcCanada 4 Online Resource Centre.

(ix)          ArcCanada 4 Data Licensee acknowledges and agrees that any of ESRI Canada’s interpretations and/or commentary to the Parks Canada Datasets available under ESRI Canada’s ArcCanada 4 Online Resource Centre is the sole responsibility and choice of ESRI Canada and shall not be construed as an endorsement by Canada or Parks Canada of such ESRI Canada interpretations and/or commentary to the Parks Canada Datasets.

(x)           The ArcCanada 4 Data Licensee shall be responsible for, and shall at all times indemnify and hold harmless Canada, Parks Canada and ESRI Canada, their respective officers, employees, agents and contractors from and against any and all claims, demands, losses, costs, damages, injuries, causes of action, actions, suits or other proceedings whatsoever by reason of or arising out of the ArcCanada 4 Data Licensee\'s use of the Parks Canada Datasets or the ArcCanada 4 Data Licensee\'s exploitation of the rights granted under this data use agreement.

(xi)          The ArcCanada 4 Data Licensee’s liability to indemnify Canada, Parks Canada and ESRI Canada under this data use agreement shall not affect or prejudice Canada, Parks Canada or ESRI Canada from exercising any other rights under law.

(xiii)        ESRI Canada shall have the immediate right to terminate all data user rights granted by ESRI Canada if the ArcCanada 4 Data Licensee permits or commits a breach of any of its covenants or obligations under this Schedule or the data use agreement. All disclaimers, warranties and indemnities shall survive any such termination.

 

SCHEDULE 8

 

Additional Data Use Terms and Conditions for Statistics Canada’s 2009 Road Network Files Database (“2009 RNF Database”) sourced by ESRI Canada from Statistics Canada:

 

(i)      The user of the 2009 RNF Database (“ArcCanada 4 Data Licensee”) acknowledges and agrees that Her Majesty the Queen in Right of Canada (Canada) as represented by the Minister of Industry (Statistics Canada) holds and shall retain the sole and exclusive worldwide copyright to the 2009 RNF Database and other rights pertaining in any way to 2009 RNF Database as used or otherwise made available under ESRI Canada’s ArcCanada 4 Online Resource Centre and has licensed to ESRI Canada certain rights to the 2009 RNF Database, including the right to sublicense those rights to third parties, on certain terms and conditions.

(ii)    The ArcCanada 4 Data Licensee acknowledges and agrees that the following is the applicable  data source notices for the 2009 RNF Database :

 

“Source: Geography Division, Statistics Canada, 2009 Road Network File, 92-500-XWE,

92-500-XWF

The incorporation of data sourced from Statistics Canada within this product shall not be construed as constituting an endorsement by Statistics Canada of such product)."

 

“Reproduced with the permission of Statistics Canada”

 

(iii)   ArcCanada 4 Data Licensee acknowledges and agrees that any use of the 2009 RNF Database available under ESRI Canada’s ArcCanada 4 Online Resource Centre must not: must not: (a) be in an undignified context; (b) be considered unfair, misleading or inaccurate; (c) be used in a context that may prejudice or harm a third party; or (d) infringe on the proprietary rights of third parties.

(iv)   ArcCanada 4 Data Licensee acknowledges and agrees that ESRI Canada may at any reasonable time, upon notice to the ArcCanada 4 Data Licensee, have access to the 2009 RNF Database being used by the ArcCanada 4 Data Licensee in order to permit ESRI Canada to inspect the 2009 RNF Database and to verify its conformity with the terms and conditions of its permitted use.

(v)    All copyright, other proprietary notices of Canada and metadata appearing on or incorporated into the 2009 RNF Database, as well as any and all conditions of use associated with the 2009 RNF Database, shall be incorporated and maintained on all reproductions thereof.

(vi)   ArcCanada 4 Data Licensee acknowledges and agrees that Canada, Statistics Canada and ESRI Canada make no representation or warranty of any kind with respect to the accuracy, usefulness, novelty, validity, scope, completeness or currency of the 2009 RNF Database, at any time and from time to time, and expressly disclaim any implied warranty of merchantability or fitness for a particular purpose of the 2009 RNF Database. Canada, Statistics Canada and ESRI Canada do not ensure or warrant compatibility with past, current or future versions of computer software to access the 2009 RNF Database.

(vii)  The ArcCanada 4 Data Licensee acknowledges having received notice of the disclaimer set out above and accepts the 2009 RNF Database on an "as is" basis, without representations or warranties of any kind. No oral or written information or advice given by Canada, Statistics Canada or ESRI Canada, at any time or from time to time, shall create or evidence, or be deemed to create or evidence, a contractual representation, warranty or guarantee of any kind.

(viii)ArcCanada 4 Data Licensee acknowledges and agrees that the ArcCanada 4 Data Licensee shall have no recourse against Canada, Statistics Canada and ESRI Canada, its respective officers, directors, employees, authorized agents and contractors, whether by way of any suit or action or other, for any loss, liability, damage or cost that the ArcCanada 4 Data Licensee may suffer or incur at any time, by reason of the ArcCanada 4 Data Licensee\'s possession or use of the 2009 RNF Database or arising out of the exercise by the ArcCanada 4 Data Licensee of its rights hereunder.

(ix)   The ArcCanada 4 Data Licensee shall indemnify Canada, Statistics Canada and ESRI Canada, their respective officers, directors, employees, authorized agents and contractors from all claims whatsoever alleging loss, costs, expenses, damages or injuries (including injuries resulting in death) arising out of the ArcCanada 4 Data Licensee\'s possession or use of the 2009 RNF Database or the exercise by the ArcCanada 4 Data Licensee of its rights hereunder.

(x)    The ArcCanada 4 Data Licensee\'s liability to indemnify Canada, Election Canada and ESRI Canada under this data use agreement shall not affect or prejudice Canada, Statistics Canada or ESRI Canada from exercising any other rights under law.

(xi)   ESRI Canada shall have the immediate right to terminate all data user rights granted by ESRI Canada if the ArcCanada 4 Data Licensee permits or commits a breach of any of its covenants or obligations under this Schedule or the data use agreement. All disclaimers, warranties and indemnities shall survive any such termination.

(i)      ArcCanada 4 Data Licensee acknowledges and agrees that any use of the 2009 RNF Database available under ESRI Canada’s ArcCanada 4 Online Resource Centre shall not be construed as an endorsement by Canada or Statistics Canada of ESRI Canada’s ArcCanada 4 Online Resource Centre.

 



 

SCHEDULE 9

 

Additional Data Use Terms and Conditions for Statistics Canada’s Boundary Files 2006 Census Database (“Boundary Files”) sourced by ESRI Canada from Statistics Canada:

 

(i)            The user of the Boundary Files (“ArcCanada 4 Data Licensee”) acknowledges and agrees that Her Majesty the Queen in Right of Canada (Canada) as represented by the Minister of Industry (Statistics Canada) holds and shall retain the sole and exclusive worldwide copyright to the Boundary Files and other rights pertaining in any way to Boundary Files as used or otherwise made available under ESRI Canada’s ArcCanada 4 Online Resource Centre and has licensed to ESRI Canada certain rights to the Boundary Files, including the right to sublicense those rights to third parties, on certain terms and conditions.

(ii)           The ArcCanada 4 Data Licensee acknowledges and agrees that the following is the applicable data source notices for the Boundary Files:

 

“Source: Geography Division, Statistics Canada, Boundary Files, 2006 Census 92-160-

XWE/XWF

The incorporation of data sourced from Statistics Canada within this product shall not be construed as constituting an endorsement by Statistics Canada of such product.”

“Reproduced with the permission of Statistics Canada”

 

(iii)          ArcCanada 4 Data Licensee acknowledges and agrees that any use of the Boundary Files available under ESRI Canada’s ArcCanada 4 Online Resource Centre must not must not: (a) be in an undignified context; (b) be considered unfair, misleading or inaccurate;  (c)               be used in a context that may prejudice or harm a third party; or  (d) infringe on the proprietary rights of third parties.:

(iv)          ArcCanada 4 Data Licensee acknowledges and agrees that ESRI Canada may at any reasonable time, upon notice to the ArcCanada 4 Data Licensee, have access to the Boundary Files being used by the ArcCanada 4 Data Licensee in order to permit ESRI Canada to inspect the Boundary Files and to verify its conformity with the terms and conditions of its permitted use.

(v)           All copyright, other proprietary notices of Canada and metadata appearing on or incorporated into the Boundary Files, as well as any and all conditions of use associated with the Boundary Files, shall be incorporated and maintained on all reproductions thereof.

(vi)          ArcCanada 4 Data Licensee acknowledges and agrees that Canada, Statistics Canada and ESRI Canada make no representation or warranty of any kind with respect to the accuracy, usefulness, novelty, validity, scope, completeness or currency of the Boundary Files, at any time and from time to time, and expressly disclaim any implied warranty of merchantability or fitness for a particular purpose of the Boundary Files. Canada, Statistics Canada and ESRI Canada do not ensure or warrant compatibility with past, current or future versions of computer software to access the Boundary Files.

(vii)         The ArcCanada 4 Data Licensee acknowledges having received notice of the disclaimer set out above and accepts the Boundary Files on an "as is" basis, without representations or warranties of any kind. No oral or written information or advice given by Canada, Statistics Canada or ESRI Canada, at any time or from time to time, shall create or evidence, or be deemed to create or evidence, a contractual representation, warranty or guarantee of any kind.

(viii)        ArcCanada 4 Data Licensee acknowledges and agrees that the ArcCanada 4 Data Licensee shall have no recourse against Canada, Statistics Canada and ESRI Canada, its respective officers, directors, employees, authorized agents and contractors, whether by way of any suit or action or other, for any loss, liability, damage or cost that the ArcCanada 4 Data Licensee may suffer or incur at any time, by reason of the ArcCanada 4 Data Licensee\'s possession or use of the Boundary Files or arising out of the exercise by the ArcCanada 4 Data Licensee of its rights hereunder.

(ix)          The ArcCanada 4 Data Licensee shall indemnify Canada, Statistics Canada and ESRI Canada, its respective officers, directors, employees, authorized agents and contractors from all claims whatsoever alleging loss, costs, expenses, damages or injuries (including injuries resulting in death) arising out of the ArcCanada 4 Data Licensee\'s possession or use of the Boundary Files or the exercise by the ArcCanada 4 Data Licensee of its rights hereunder.

(x)           The ArcCanada 4 Data Licensee\'s liability to indemnify Canada, Election Canada and ESRI Canada under this data use agreement shall not affect or prejudice Canada, Statistics Canada or ESRI Canada from exercising any other rights under law.

(xi)          ESRI Canada shall have the immediate right to terminate all data user rights granted by ESRI Canada if the ArcCanada 4 Data Licensee permits or commits a breach of any of its covenants or obligations under this Schedule or the data use agreement. All disclaimers, warranties and indemnities shall survive any such termination.

(i)            ArcCanada 4 Data Licensee acknowledges and agrees that any use of the Boundary Files available under ESRI Canada’s ArcCanada 4 Online Resource Centre shall not be construed as an endorsement by Canada or Statistics Canada of ESRI Canada’s ArcCanada 4 Online Resource Centre.

 



 

SCHEDULE 9

 

NIAGARA ESCARPMENT COMMISSION (NEC) AS A USER CONDITION REQUIRES ALL END USERS OF DATASETS SOURCED BY ESRI CANADA FROM THE NIAGARA ESCARPMENT COMMISSION TO AGREE TO THE NEC END USER LICENSE AGREEMENT PROVIDED BELOW:

 



 

Niagara Escarpment Commission

ELECTRONIC INTELLECTUAL PROPERTY

End-User Licence Agreement

 

This is a legal agreement between you (the “Licensee”), and the Queen’s Printer for Ontario as represented by the Niagara Escarpment Commission (the “Licensor”).  BY ACCEPTING THIS ELECTRONIC INTELLECTUAL PROPERTY, YOU AGREE TO BECOME A LICENSEE BOUND BY THE FOLLOWING TERMS AND CONDITIONS.  If you do not agree with them, or do not want them to be binding on you, you should promptly return the Intellectual Property.

 

1. Electronic Intellectual Property

In this agreement, Electronic Intellectual Property (the “EIP”) means the software, data, map, picture or any other such work provided in an electronic format.

 

2. Copyright

The Licensee acknowledges that the Licensor is the sole owner of the EIP and that the Licensor shall retain all Copyright and other rights pertaining to the EIP issued under this licence.

 

3. Licence for Use

The Licensor grants to the Licensee a non-transferable, non-exclusive, limited-use licence for the EIP.  The Licensee may use and make copies of the EIP for its internal use only. 

 

4. Restrictions on Use

Except as provided for in this licence, no part of the EIP may be copied, published, disseminated or used, in any form or by any means other than for the Licensee’s own professional or business end-use only.

 

5. Term and Termination

The licence is effective until terminated.  The Licensee may terminate it at any time by destroying the EIP together with all copies thereof. This agreement terminates without notice in the event that the Licensee is in breach of any term contained herein.

 

6. Limited Warranty

The EIP is licensed to the Licensee on an “as is” basis, and the Licensor makes no guarantees, representations or warranties with respect to the data, either express or implied, arising by law or otherwise, including but not limited to, effectiveness, completeness, accuracy, or fitness for purpose. 

 

7. No Duty to provide Updates

The Licensor assumes no obligation or liability whatsoever for the provision of updates or corrections to the EIP, or the provision of notices thereof to the Licensee.

 

8. Exclusion and Indemnity

The Licensee shall indemnify and save harmless the Licensor, its servants, agents and contractors from and against any claim, demand, or action, alleging loss, costs, expenses, damages, or injuries (including injuries resulting in death) arising out of the Licensee’s use of the EIP or in any way relating to this agreement.

 

8. General

<strong>If any provision of this agreement is unenforceable, unlawful or void, the provision shall be deemed severable from the agreement and shall not affect the validity and enforceability of the remaining provisions.  This agreement is governed by the laws of Ontario and in the event of dispute, the parties agree to attorn to this jurisdiction.</strong>

 

THE LICENSEE HEREBY ACKNOWLEDGES THAT IT HAS READ THIS AGREEMENT, UNDERSTANDS IT AND AGREES TO BE BOUND BY ITS TERMS AND CONDITIONS.',
          'format' => 'full_html',
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['esri_two_66_33_second'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'esri_two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cr_resource_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_download_button',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['esri_two_66_33_second'][1] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'esri_two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'resource_teaching_materials-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'key-information',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['esri_two_66_33_second'][2] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
