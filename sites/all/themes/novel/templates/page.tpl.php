<header class="site-header <?php if(empty ($page['preface']) ): ?>no-preface<?php endif; ?> " role="banner">
  <div class="wrap">
    <!-- Logo -->
    <picture class="logo">
      <a href="/" title="Home">
        <source type="image/svg+xml" srcset="/sites/all/themes/novel/assets/images/logos/logo.svg">
        <img src="/sites/all/themes/novel/assets/images/logos/logo.png" alt="Put the site name here">
      </a>
    </picture>

    <!-- Main Navigation -->
    <?php if ($page['main_nav']): ?>
      <nav class="main-nav" role="navigation">
        <?php print render($page['main_nav']); ?>
      </nav>
    <?php endif; ?>

    </div>
</header>
<!-- Close Header -->

<?php if ($page['preface']): ?>
  <div class="preface cleafix">
      <?php print render($page['preface']); ?>
    </div>
<?php endif; ?>

<!-- Close Preface -->
<main id="content" class="<?php if(empty ($page['preface']) ): ?>no-preface<?php endif; ?> ">
  <div class="wrap">
    <?php if ($page['help']): ?>
        <?php print render($page['help']); ?>
    <?php endif; ?>

    <?php if ($page['sidebar_first']): ?>
      <aside class="sidebar-first" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>
    
    <?php if ($page['content']): ?>
        <?php print render($page['content']); ?>
    <?php endif; ?>

    <?php if ($page['sidebar_second']): ?>
      <aside class="sidebar-second" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>
  </div>
</main>

<footer>
  <?php if ($page['footer']): ?>
    <div class="wrap">
      <?php print render($page['footer']); ?>
    </div>
  <?php endif; ?>
</footer>