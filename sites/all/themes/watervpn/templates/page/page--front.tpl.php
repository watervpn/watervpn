<div class="off-canvas-wrap" data-offcanvas>
  <div class="inner-wrap">

    <aside class="left-off-canvas-menu">
        <!-- whatever you want goes here -->

        <!-- Off Canvas Menu -->
        <?php if ($top_bar): ?>
          <!--.top-bar -->
          <?php if ($top_bar_classes): ?>
          <div class="<?php print $top_bar_classes; ?>">
          <?php endif; ?>
            <nav class="mobile top-bar expanded" data-topbar <?php print $top_bar_options; ?>>
              <ul class="title-area">
                <!-- LOGO -->
                <li class="name"><h1><?php print $linked_site_name; ?></h1></li>
              </ul>
            <section class="top-bar-section">
              <?php if ($top_bar_main_menu) :?>
                <?php print $top_bar_main_menu; ?>
              <?php endif; ?>
            </section> 
            </nav>
          <?php if ($top_bar_classes): ?>
          </div>
          <?php endif; ?>
          <!--/.top-bar -->
        <?php endif; ?>
    </aside>

    <!-- main content goes here -->
    <!--.page -->
    <div role="document" class="page">
      <!--.l-header region -->
      <header role="banner" class="l-header">

        <?php if ($top_bar): ?>
          <!--.top-bar -->
          <?php if ($top_bar_classes): ?>
          <div class="<?php print $top_bar_classes; ?>">
          <?php endif; ?>
            <nav class="top-bar" data-topbar <?php print $top_bar_options; ?>>
              <ul class="title-area">
                <li class="toggle-topbar menu-icon"><a class="left-off-canvas-toggle" href="#" >Menu</a></li>
                <!-- <li class="toggle-topbar menu-icon"><a href="#"><span><?php print $top_bar_menu_text; ?></span></a></li> -->
                <li class="name"><h1><?php print $linked_site_name; ?></h1></li>
              </ul>
            <section class="top-bar-section">
              <?php if ($top_bar_main_menu) :?>
                <?php print $top_bar_main_menu; ?>
              <?php endif; ?>
              <?php if ($top_bar_secondary_menu) :?>
                <?php print $top_bar_secondary_menu; ?>
              <?php endif; ?>
            </section> 
            </nav>
          <?php if ($top_bar_classes): ?>
          </div>
          <?php endif; ?>
          <!--/.top-bar -->
        <?php endif; ?>

        <!-- Title, slogan and menu -->
        <?php if ($alt_header): ?>
        <section class="row <?php print $alt_header_classes; ?>">

          <?php if ($linked_logo): print $linked_logo; endif; ?>

          <?php if ($site_name): ?>
            <?php if ($title): ?>
              <div id="site-name" class="element-invisible">
                <strong>
                  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
                </strong>
              </div>
            <?php else: /* Use h1 when the content title is empty */ ?>
              <h1 id="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </h1>
            <?php endif; ?>
          <?php endif; ?>

          <?php if ($site_slogan): ?>
            <h2 title="<?php print $site_slogan; ?>" class="site-slogan"><?php print $site_slogan; ?></h2>
          <?php endif; ?>

          <?php if ($alt_main_menu): ?>
            <nav id="main-menu" class="navigation" role="navigation">
              <?php print ($alt_main_menu); ?>
            </nav> <!-- /#main-menu -->
          <?php endif; ?>

          <?php if ($alt_secondary_menu): ?>
            <nav id="secondary-menu" class="navigation" role="navigation">
              <?php print $alt_secondary_menu; ?>
            </nav> <!-- /#secondary-menu -->
          <?php endif; ?>

        </section>
        <?php endif; ?>
        <!-- End title, slogan and menu -->

        <?php if (!empty($page['header'])): ?>
          <!--.l-header-region -->
          <section class="l-header-region row">
            <div class="large-12 columns">
              <?php print render($page['header']); ?>
            </div>
          </section>
          <!--/.l-header-region -->
        <?php endif; ?>

      </header>
      <!--/.l-header -->

      <?php if (!empty($page['banner'])): ?>
        <!--.l-header-region -->
        <section class="">
          <div class="">
            <?php print render($page['banner']); ?>
          </div>
        </section>
      <?php endif; ?>

      <?php if ($messages && !$zurb_foundation_messages_modal): ?>
        <!--/.l-messages -->
        <section class="l-messages row">
          <div class="large-12 columns">
            <?php if ($messages): print $messages; endif; ?>
          </div>
        </section>
        <!--/.l-messages -->
      <?php endif; ?>

      <?php if (!empty($page['help'])): ?>
        <!--/.l-help -->
        <section class="l-help row">
          <div class="large-12 columns">
            <?php print render($page['help']); ?>
          </div>
        </section>
        <!--/.l-help -->
      <?php endif; ?>

      <main role="main" class="row l-main">
        <div class="<?php print $main_grid; ?> main columns">
          <?php if (!empty($page['highlighted'])): ?>
            <div class="highlight panel callout">
              <?php print render($page['highlighted']); ?>
            </div>
          <?php endif; ?>

          <a id="main-content"></a>

          <?php if ($breadcrumb): print $breadcrumb; endif; ?>

          <?php if ($title && !$is_front): ?>
            <?php print render($title_prefix); ?>
            <h1 id="page-title" class="title"><?php print $title; ?></h1>
            <?php print render($title_suffix); ?>
          <?php endif; ?>

          <?php if (!empty($tabs)): ?>
            <?php print render($tabs); ?>
            <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
          <?php endif; ?>

          <?php if ($action_links): ?>
            <ul class="action-links">
              <?php print render($action_links); ?>
            </ul>
          <?php endif; ?>

          <?php print render($page['content']); ?>
        </div>
        <!--/.main region -->

        <?php if (!empty($page['sidebar_first'])): ?>
          <aside role="complementary" class="<?php print $sidebar_first_grid; ?> sidebar-first columns sidebar">
            <?php print render($page['sidebar_first']); ?>
          </aside>
        <?php endif; ?>

        <?php if (!empty($page['sidebar_second'])): ?>
          <aside role="complementary" class="<?php print $sidebar_sec_grid; ?> sidebar-second columns sidebar">
            <?php print render($page['sidebar_second']); ?>
          </aside>
        <?php endif; ?>
      </main>
      <!--/.main-->

      <!-- main content -->
      <div class="bg1 w_feature">
        <div class="row feature-bg1">
          <div class="columns large-12">
            <div class="block-title">
              <h2>Any Platform Any Time</h2>
              <h3>Our service works on all platform 24/7</h3>
            </div>

            <div class="large-6 body">
              <p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy </p>
            </div>
            
          </div>
        </div>
      </div>

      <div class="bg2 w_feature">
        <div class="row feature-bg2">
          <div class="columns large-12">
            <div class="block-title">
              <h2>Get protections in seconds</h2>
              <h3>Open source GUI aviable.</h3>
            </div>

            <div class="body">
              <p class="">Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s,</p>
            </div>
          </div>
        </div>
      </div>

      <div class="bg3 w_feature">
        <div class="row feature-bg3">
          <div class="columns large-12">
            <div class="block-title">
              <h2>Protect all your devices.</h2>
              <h3>Connect all your devices at no extra cost.</h3>
            </div>

            <div class="large-6 body">
              <p>We support up to 5 device connected at same time per account.</p>
            </div>
            
          </div>
        </div>
      </div>

      <div class="bg4 w_diagrams">
        <div class="row">
          <div class="columns large-4">
            <div class="">
              <h4>One account support</h4>
              <p>connect multiple devices</p>
              <img src="/sites/all/themes/watervpn/images/bgs/stock-illustration-41854756-vpn-virtual-private-network-illustration-concept.jpg" />
              <p>Every bit of information between your device and server are protected.</p>
            </div>
          </div>
          <div class="columns large-4">
            <div class="">
              <h4>One account support</h4>
              <p>connect multiple devices</p>
              <img src="/sites/all/themes/watervpn/images/bgs/stock-illustration-41854756-vpn-virtual-private-network-illustration-concept.jpg" />
              <p>Every bit of information between your device and server are protected.</p>
            </div>
          </div>
          <div class="columns large-4">
            <div class="">
              <h4>One account support</h4>
              <p>connect multiple devices</p>
              <img src="/sites/all/themes/watervpn/images/bgs/stock-illustration-41854756-vpn-virtual-private-network-illustration-concept.jpg" />
              <p>Every bit of information between your device and server are protected.</p>
            </div>
          </div>
        </div>
      </div>

      <div class="bg7 w_policy">
        <div class="row feature-bg7">
          <div class="columns large-12">
            <div class="header">
              <span class="icon"></span>
              <h2>100% satisfaction guaranteed.</h2>
            </div>

            <div class="large-12 body">
              <p><a href="#">Learn about our 7 days money back policy ></a><br>
              <a href="#">Try our protection plan ></a></p>
            </div>
          </div>
        </div>
      </div>


      <div class="bg6 w_business">
        <div class="row feature-bg6">
          <div class="columns large-12">
            <div class="header">
              <h2>VPN for business</h2>
              <h3>Protect comunication with our service.</h3>
            </div>

            <div class="large-6 body">
              <p><a href="#">Learn about using VPN for business ></a></p>
              <p><a href="#">Shop for your protection plan ></a></p>
            </div>
            
          </div>
        </div>
      </div>

      <div class="bg7 w_services">
        <div class="row feature-bg7">
          <div class="columns large-12">
            <div class="header">
              <h2>Our Services</h2>
            </div>

            <div class="large-12 body">
              <?php if (!empty($page['featured'])): ?>
                <!--/.featured -->
                <section class="l-featured row">
                  <div class="large-9 columns product_container">
                    <?php print render($page['featured']); ?>
                  </div>
                </section>
                <!--/.l-featured -->
              <?php endif; ?>
            </div>
            
          </div>
        </div>
      </div>


<!--       <div class="bg5 w_promo">
        <div class="row">
          <div class="large-12 columns promo-header">
            <h2>Join The Revolution</h2>
            <h3>Trusted by more than 10,000 revolutionaries. Are you ready to join them?</h3>
            <a class="button">Join Now</a>
          </div>
          <div class="row">
            <div class="large-3 columns promo-block">
              <h4>Take control</h4>
              <p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s,</p>
            </div>

            <div class="large-3 columns promo-block">
              <h4>Take control</h4>
              <p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s,</p>
            </div>

            <div class="large-3 columns promo-block">
              <h4>Take control</h4>
              <p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s,</p>
            </div>

            <div class="large-3 columns promo-block last-childen">
              <h4>Take control</h4>
              <p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s,</p>
            </div>
          </div>
        </div>

      </div> -->



      <?php if (!empty($page['triptych_first']) || !empty($page['triptych_middle']) || !empty($page['triptych_last'])): ?>
        <!--.triptych-->
        <section class="l-triptych row">
          <div class="triptych-first large-4 columns">
            <?php print render($page['triptych_first']); ?>
          </div>
          <div class="triptych-middle large-4 columns">
            <?php print render($page['triptych_middle']); ?>
          </div>
          <div class="triptych-last large-4 columns">
            <?php print render($page['triptych_last']); ?>
          </div>
        </section>
        <!--/.triptych -->
      <?php endif; ?>

      <?php if (!empty($page['footer_firstcolumn']) || !empty($page['footer_secondcolumn']) || !empty($page['footer_thirdcolumn']) || !empty($page['footer_fourthcolumn'])): ?>
        <!--.footer-columns -->
        <section class="row l-footer-columns">
          <?php if (!empty($page['footer_firstcolumn'])): ?>
            <div class="footer-first large-3 columns">
              <?php print render($page['footer_firstcolumn']); ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($page['footer_secondcolumn'])): ?>
            <div class="footer-second large-3 columns">
              <?php print render($page['footer_secondcolumn']); ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($page['footer_thirdcolumn'])): ?>
            <div class="footer-third large-3 columns">
              <?php print render($page['footer_thirdcolumn']); ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($page['footer_fourthcolumn'])): ?>
            <div class="footer-fourth large-3 columns">
              <?php print render($page['footer_fourthcolumn']); ?>
            </div>
          <?php endif; ?>
        </section>
        <!--/.footer-columns-->
      <?php endif; ?>

      <!--.l-footer-->
      <footer class="l-footer panel row" role="contentinfo">
        <?php if (!empty($page['footer'])): ?>
          <div class="footer large-12 columns">
            <?php print render($page['footer']); ?>
          </div>
        <?php endif; ?>

        <?php if ($site_name) :?>
          <div class="copyright large-12 columns">
            &copy; <?php print date('Y') . ' ' . check_plain($site_name) . ' ' . t('All rights reserved.'); ?>
          </div>
        <?php endif; ?>
      </footer>
      <!--/.footer-->

      <?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>
    </div>
    <!--/.page -->


  <!-- close the off-canvas menu -->
  <a class="exit-off-canvas"></a>

  </div>
</div>