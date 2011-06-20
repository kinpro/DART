<?php
// ==================================================================
//  Author: Robert Joseph (dart@vizmotion.com)
//	 Web: http://wiki.bssd.org/index.php/DART_System
// ==================================================================

if(Privilege(A28) == 'district') {
   $district = getNotes('Admin');
}

if(($currentMySite != "Admin") and (Privilege(A28) != 'none')) {
  $snotes = getNotes($currentMySite);
}

if($district['important'] <> "" or $district['warning'] <> "" or $district['tip'] <> "") {
    $body .= '<font size="4" color="#cc0000">DART System Status &amp; Reminders</font>';
    }

if($district['important'] <> "") {
   $body .= "<div class=\"noteimportant\">" . $district['important'] . "</div>";
}

if($district['warning'] <> "") {
   $body .= "<div class=\"notewarning\">" . $district['warning'] . "</div>";
}

if($district['tip'] <> "") {
   $body .= "<div class=\"notetip\">" . $district['tip'] . "</div>";
}

if($snotes['important'] <> "" or $snotes['warning'] <> "" or $snotes['tip'] <> "") {
    $body .= "<font size=\"4\" color=\"#cc0000\">DART Site $currentMySite System Status &amp; Reminders</font>";
    }

if($snotes['important'] <> "") {
   $body .= "<div class=\"noteimportant\">" . $snotes['important'] . "</div>";
}

if($snotes['warning'] <> "") {
   $body .= "<div class=\"notewarning\">" . $snotes['warning'] . "</div>";
}

if($snotes['tip'] <> "") {
   $body .= "<div class=\"notetip\">" . $snotes['tip'] . "</div>";
}

$title = "DART Home Page";

$body .="<font size=\"4\">DART: System Introduction<br></font>
				<div align=\"left\"><br>
					<br>
					<font size=\"2\">Welcome to the BSSD Data Analysis and Reporting Toolkit system - or DART. This is one of the three main systems BSSD now uses to link learner and teacher needs to curriculum development, and district resources.<br>
						<br>
						DART is a database system which allows the tracking and reporting of learner progress on a series of goal areas. It is unique for several reasons:</font>
					<ul>
						<li type=\"circle\"><font size=\"2\"><b>DART is Learner-centered!</b> - DART allows users to create, share and delete groups on THEIR own to individualize, track and plan group instruction or interventions.</font>
						<li type=\"circle\"><font size=\"2\"><b>DART is Smart</b>  - DART actually automatically links learner needs to the wiki-based BSSD Open Content development system to allow teachers and learners to build knowledge and capacity together!</font>
						<li type=\"circle\"><font size=\"2\"><b>DART is Complete</b> - DART tracks and reports all required school and student information for state & federal reporting.</font>
						<li type=\"circle\"><font size=\"2\"><b>DART is Intuitive</b> - Students, teachers and administrators find the interface so intuitive that very little support is needed.</font>
						<li type=\"circle\"><font size=\"2\"><b>DART is Open Source</b> - This means DART is <b>FREE,</b> to school districts, and that development and support takes place by users themselves.</font>
						<li type=\"circle\"><font size=\"2\"><b>DART is Modular</b> - Rather than telling users what data modules they need, users contribute modules that solve their problems.</font>
						<li type=\"circle\"><font size=\"2\"><b>DART is Powerful and Secure</b> - DART runs on the proven and secure Linux/Apache/MySQL/PHP platform with Secure Socket Layer (SSL) encryption technology. It practically never crashes.
					</ul>
					<p><font size=\"2\">For BSSD, DART tracks student progress through our 9 Content Areas, and the various levels within each Content Area. For a list, and detailed information about this BSSD Model, please see our explanation on the <a title=\"BSSD Standards Information\" href=\"http://wiki.bssd.org/index.php/Standards_Information\" target=\"_blank\">BSSD OpenContent website</a>.<br>
							<br>
							Each standard and assessment task which makes up a level is tracked, and each user gets customized information about group and individual progress. All reports and level changes are done at the school building level, and District Office program staff can access and manage all 15 of our schools with ease.</font></p>
					<p><font size=\"2\">Instructional needs and weaknesses are highlighted using ideas similar to &quot;tag clouding&quot; to produce weighted lists of potential areas of focus. These are keyed directly, and hot-linked to </font></p>
					<p><font size=\"2\">User-based permissions mean that parents, students, teachers school and district administrators all have the power to do what they need, and no more.</font></p>
					<p><font size=\"2\">For information about the DART project, or to learn about our other Open systems, see the <a title=\"DART Project Information\" href=\"http://wiki.bssd.org/index.php/DART_System\">DART wiki</a>.</font></p>
					
        </div>";

include ("template.inc");

?>