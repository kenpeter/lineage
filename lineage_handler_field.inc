<?php

/**
 * Field handler for Taxonomy: Hierarchy
 */
class lineage_handler_field extends views_handler_field {
  function render($values) {
    $content = $values->{$this->field_alias};

    if ($content == '') {
      return '';
    }

    // Split hierarchy string into hierarchical path pieces.
    // Term entries are separated by \n; trim so we don't add empty pieces.
    $path = explode("\n", trim($content));
    $s = '';
    // Compose the path in readable form.
    foreach ($path as $a) {
      $a = lineage_strip_weight($a);
      if ($s != '') {
        $s .= '  /  ';
      }
      $s .= $a;
    }
    // output pseudo-link (without href) with hierarchically indented term and full path via title/alt-rollover
    return str_repeat('&nbsp;&nbsp;&nbsp;', substr_count($content, "\n") - 1) . '<a title="' . $s . '" alt="' . $s . '">' . $a . '</a>';
  }
}

