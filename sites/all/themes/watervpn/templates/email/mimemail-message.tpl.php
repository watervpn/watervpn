<?php
global $base_url;
$site_name = 'Water VPN';


/**
* ======================HTML Body Example=======================
* Class bg-grey or bg-white class is requried for top level div.
* See table class for details.
* ==============================================================
**/
// $body = <<< BODY

// <div class="bg-grey">
//   <h1>$subject</h1>
//   <p>So strongly and <a href="#">metaphysically</a> did I conceive of my situation then, that while earnestly watching his motions, I seemed distinctly to perceive that my own individuality was now merged in a joint stock company of two; that my free will had received a mortal wound; and that another's mistake or misfortune might plunge innocent me into unmerited disaster and death. Therefore, I saw that here was a sort of interregnum in Providence; for its even-handed equity never could have so gross an injustice. And yet still further pondering—while I jerked him now and then from. between the whale and ship, which would threaten to jam him.</p>
// </div>

// <div class="bg-white">
//   <h2>This is a heading 2</h2>
//   <p>Keytar McSweeney's Williamsburg, readymade leggings try-hard 90's street art letterpress hoodie occupy Wes Anderson Banksy. Asymmetrical viral letterpress, McSweeney's seitan 3 wolf moon drinking vinegar sartorial pour-over messenger bag photo booth umami next level craft beer. </p>

//   <h3>This is a heading 2</h3>
//   <p>Tote bag 8-bit flannel dreamcatcher photo booth. Tofu photo booth American Apparel, cliche brunch swag freegan lomo retro cray Vice gastropub post-ironic +1 pickled. Marfa Tonx next level, Banksy lo-fi vegan pop-up chia small batch DIY seitan asymmetrical viral. Disrupt salvia bespoke craft beer master cleanse. Butcher cornhole gentrify pop-up, raw denim viral literally.</p>

//   <hr>

//   <p>Banksy lo-fi vegan pop-up chia small batch DIY seitan asymmetrical viral. Disrupt salvia bespoke craft beer master cleanse. Butcher cornhole gentrify pop-up, raw denim viral literally.</p>

//   <table border="0" cellpadding="0" cellspacing="0" width="100%" class="themed-table">
//     <tr class="thead">
//       <td align="left" class="col-1">Tech Code</td>
//       <td align="left">Status</td>
//     </tr>

//     <tr>
//       <td align="center" class="font-orange col-1">1112</td>
//       <td align="left" class="bg-purple">Pending</td>
//     </tr>

//     <tr>
//       <td align="center" class="font-orange col-1">1113</td>
//       <td align="left" class="bg-green">Proven</td>
//     </tr>

//     <tr>
//       <td align="center" class="font-orange col-1">1114</td>
//       <td align="left" class="bg-orange">Vetted & Requires Probation</td>
//     </tr>

//     <tr>
//       <td align="center" class="font-orange col-1">1115</td>
//       <td align="left" class="bg-purple">Pending</td>
//     </tr>

//     <tr>
//       <td align="center" class="font-orange col-1">1116</td>
//       <td align="left" class="bg-green">Proven</td>
//     </tr>
//   </table>

// </div>
// BODY;





$footer = <<< FOOTER

<div class="links">
  <h3>Links</h3>
  <ul>
    <li><a href="#">Watervpn</a></li>
    <li><a href="$base_url/user">login</a></li>
  </ul>
</div>

<div class="social">
  <h3>Follow Us</h3>
  <ul>
    <li><a class="facebook" href="#"><img src="#" /></a></li>
    <li><a class="linkedin" href="#"><img src="#" /></a></li>
  </ul>
</div>

<div class="extra">
  <img src="$base_url/sites/all/themes/watervpn/images/watervpn_logo.png" />
</div>

<div class="clear-fix"></div>

FOOTER;


/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <?php if ($css): ?>
    <style type="text/css">
      <!--
      <?php print $css ?>
      -->
    </style>
    <?php endif; ?>
  </head>
  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
    <div id="center">
      <div id="main">

        <table border="0" cellpadding="0" cellspacing="0" height="100%" width="100%" id="bodyTable">
          <tr>
            <td align="center" valign="top">
              <table border="0" cellpadding="0" cellspacing="0" width="600" id="emailContainer">
                <tr class="head">
                  <td align="" valign="middle">
                    <div class=""><a href="<?php echo $base_url; ?>"><img class="logo" src="<?php echo $base_url; ?>/sites/all/themes/watervpn/images/watervpn_logo.png" /></a></div>
                  </td>
                </tr>
                <tr class="body">
                  <td align="center" valign="top">
                    <table border="0" cellpadding="0" cellspacing="0" width="100%" id="emailBody">
                      <tr>
                        <td align="center" valign="top">
                          <div class="body-content">
                            <h1 class="title"><?php ?></h1>
                            <?php print $body; ?>
                          </div>
                        </td>
                      </tr>
                    </table>
                  </td>
                </tr>

                <tr class="footer">
                  <td align="center" valign="top">
                    <table border="0" cellpadding="0" cellspacing="0" width="100%" id="emailFooter">
                      <tr>
                        <td align="left" valign="top">
                          <div class="footer-container"><?php print $footer; ?></div>
                          <div class="copyright">Copyright <?php echo date("Y"); ?> <?php print $site_name; ?>. All rights reserved.</div>
                        </td>
                      </tr>
                    </table>
                  </td>
                </tr>
              </table>
            </td>
          </tr>
        </table>

      </div>
    </div>
  </body>
</html>
