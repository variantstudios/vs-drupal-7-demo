<header role="banner">
  <div class="wrap">
    <!-- Logo -->
    <picture class="logo">
      <source type="image/svg+xml" srcset="/sites/all/themes/novel/assets/images/logos/logo.svg">
      <img src="/sites/all/themes/novel/assets/images/logos/logo.png" alt="Put the site name here">
    </picture>

  </div>
  <!-- Main Navigation -->
  <?php if ($page['main_nav']): ?>
    <nav role="navigation">
      <?php print render($page['main_nav']); ?>
    </nav>
  <?php endif; ?>
</header>
<!-- Close Header -->
<?php if ($page['preface']): ?>
  <div class="preface cleafix">
    <div class="wrap">
      <?php print render($page['preface']); ?>
    </div>
  </div>
<?php endif; ?>
<!-- Close Preface -->
<main role="main" id="content">
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